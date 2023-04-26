/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "WindowManager.h"
#include "GreaperGALDLL.h"
#include "../../GreaperCore/Public/SlimTaskScheduler.h"
#if PLT_WINDOWS
#include "Win/WinWindow.h"
#include "Win/GLWinWindow.h"
#include "Win/VkWinWindow.h"
#include "../../GreaperCore/Public/Win/Win32ShellScalingAPI.h"
#elif PLT_LINUX

#endif

using namespace greaper;
using namespace greaper::gal;

#if PLT_WINDOWS
extern EmptyResult EnableDPI();
#endif

SPtr<WindowManager> gWindowManager = {};
extern SPtr<GreaperGALLibrary> gGALLibrary;

void WindowManager::OnInitialization() noexcept
{

}

void WindowManager::OnDeinitialization() noexcept
{
	
}

void WindowManager::OnActivation(const PInterface& oldDefault) noexcept
{
	const auto& prev = (const PWindowManager&)oldDefault;
	
	if(prev != nullptr)
	{
		// Copy monitors
		{
			LOCK(m_MonitorMutex);
			m_Monitors.clear();
			m_MainMonitor = 0;
			prev->AccessMonitors([this](CSpan<PMonitor> span)
			{
				const auto size = span.GetSizeFn();
				if(m_Monitors.capacity() < size)
					m_Monitors.reserve(size);
				for(const auto& elem : span)
				{
					if(elem->IsPrimary())
						m_MainMonitor = m_Monitors.size();
					m_Monitors.push_back(elem);
				}
			});
		}
		// Copy windows
		{
			LOCK(m_WindowMutex);
			m_Windows.clear();
			prev->AccessWindows([this](CSpan<PWindow> span)
			{
				const auto size = span.GetSizeFn();
				if(m_Windows.capacity() < size)
					m_Windows.reserve(size);
				for(const auto& elem : span)
				{
					m_Windows.push_back(elem);
				}
			});
		}
	}
	else
	{
#if PLT_WINDOWS
		auto enableDPIRes = EnableDPI();
		if (enableDPIRes.HasFailed())
			gGALLibrary->LogWarning(enableDPIRes.GetFailMessage());
#endif
		QueryMonitors();
	}
}

void WindowManager::OnDeactivation(const PInterface& newDefault) noexcept
{
	m_Monitors.clear();
}

void WindowManager::InitProperties() noexcept
{
	if (m_Library.expired())
		return; // no base library weird

	auto lib = m_Library.lock();

	if (m_Properties.size() != (sizet)COUNT)
		m_Properties.resize((sizet)COUNT, WIProperty());

	WPtr<Win32DPIScalingProp_t> win32DPIScalingProp;
	auto result = lib->GetProperty(Win32DPIScalingName);
	if (result.IsOk())
		win32DPIScalingProp = result.GetValue();
	
	if (win32DPIScalingProp.expired())
	{
		auto win32DPIScalingResult = CreateProperty<Win32DPIScaling_t>(m_Library, Win32DPIScalingName,
			Win32DPIScaling_t::MONITOR_AWARE_V2, "On Windows systems tells which way of DPI scaling should try to use."sv, false, false, {});
		Verify(win32DPIScalingResult.IsOk(), "Couldn't create the property '%s' msg: %s", Win32DPIScalingName.data(), win32DPIScalingResult.GetFailMessage().c_str());
		win32DPIScalingProp = (WPtr<Win32DPIScalingProp_t>)win32DPIScalingResult.GetValue();
	}
	m_Properties[(std::size_t)Win32DPIScaling] = win32DPIScalingProp;
}

void WindowManager::DeinitProperties() noexcept
{
	for (auto& prop : m_Properties)
		prop.reset();
}

void WindowManager::QueryMonitors()
{
	LOCK(m_MonitorMutex);
	UpdateMonitorInfo(m_Monitors, m_MainMonitor);
}

SPtr<Monitor> WindowManager::GetMainMonitor() const
{
	LOCK(m_MonitorMutex);
	if(m_Monitors.size() > m_MainMonitor)
		return m_Monitors[m_MainMonitor];
	return PMonitor();
}

void WindowManager::AccessMonitors(const std::function<void(CSpan<PMonitor>)>& accessFn) const
{
	SharedLock lock(m_MonitorMutex);
	accessFn(CreateSpan(m_Monitors));
}

template<class TWindow>
static void WindowCreation(TResult<PWindow>& output, const WindowDesc& windowDesc)noexcept
{
	auto window = SPtr<TWindow>(Construct<TWindow>());
	auto futureRes = windowDesc.Scheduler->AddTask([&output, &window, &windowDesc]()
		{
			EmptyResult rtn = window->Create(windowDesc);
			if (rtn.HasFailed())
				output = Result::CopyFailure<PWindow>(rtn);
			else
				output = Result::CreateSuccess((PWindow)window);
		});
	if (futureRes.HasFailed())
		output = Result::CopyFailure<PWindow>(futureRes);

	windowDesc.Scheduler->WaitUntilTaskFinished(futureRes.GetValue());
	//futureRes.GetValue().wait();
}

TResult<PWindow> WindowManager::CreateWindow(const WindowDesc& windowDesc)
{
	auto fixScheduler = [this](WindowDesc& desc)
	{
		if (desc.Scheduler == nullptr)
		{
			// Get the thread manager
			VerifyNot(m_Library.expired(), "Trying to get the ThreadManager, but library is expired!");
			auto lib = m_Library.lock();
			auto wApp = lib->GetApplication();
			VerifyNot(wApp.expired(), "Trying to get the ThreadManager, but Application is expired!");
			auto app = wApp.lock();
			auto thmgrRes = app->GetActiveInterface(IThreadManager::InterfaceUUID);
			if (thmgrRes.HasFailed())
				return Result::CopyFailure(thmgrRes);

			auto thmgr = (PThreadManager)thmgrRes.GetValue();
			desc.Scheduler = SlimTaskScheduler::Create((WThreadManager)thmgr, "GreaperWindow TaskScheduler"sv, 1, false);
		}
		if (desc.Scheduler->GetWorkerCount() != 1)
			return Result::CreateFailure(Format("Trying to create a window with a scheduler that doesn't have exactly 1 worker, it has %d workers.", desc.Scheduler->GetWorkerCount()));
		return Result::CreateSuccess();
	};
	
	TResult<PWindow> output;
#if PLT_WINDOWS
	switch (windowDesc.GetBackend())
	{
	case RenderBackend_t::Native:
	{
		WinWindowDesc desc = (const WinWindowDesc&)windowDesc;
		EmptyResult schRes = fixScheduler(desc);
		if (schRes.HasFailed())
			return Result::CopyFailure<PWindow>(schRes);
		WindowCreation<WinWindowImpl>(output, desc);
	}
		break;
	case RenderBackend_t::OpenGL:
	{
		GLWinWindowDesc desc = (const GLWinWindowDesc&)windowDesc;
		EmptyResult schRes = fixScheduler(desc);
		if (schRes.HasFailed())
			return Result::CopyFailure<PWindow>(schRes);
		WindowCreation<GLWinWindowImpl>(output, desc);
	}
		break;
	case RenderBackend_t::Vulkan:
	{
		VkWinWindowDesc desc = (const VkWinWindowDesc&)windowDesc;
		EmptyResult schRes = fixScheduler(desc);
		if (schRes.HasFailed())
			return Result::CopyFailure<PWindow>(schRes);
		WindowCreation<VkWinWindowImpl>(output, desc);
	}
		break;
	default:
		return Result::CreateFailure<PWindow>(Format("Trying to create a Windows window but the given backend %s is not implemented.", TEnum<RenderBackend_t>::ToString(windowDesc.GetBackend()).data()));
	}
#elif PLT_LINUX
	auto lnxDesc = (const LnxWindowDesc&)desc;
	switch (lnxDesc.GetBackend())
	{
	case RenderBackend_t::Native:
	{
		switch(lnxDesc.GetDisplayProtocol())
		{
		case DisplayProtocol_t::X11:

		case DisplayProtocol_t::Wayland:
			return CreateWLWindow((const WLWindowDesc&)lnxDesc);
		default:
			return Result::CreateFailure<PWindow>(Format("Trying to create a Native Linux window but an invalid display protocol was given %s.", TEnum<DisplayProtocol_t>::ToString(lnxDesc.GetDisplayProtocol()).data()));
		}
	}
	case RenderBackend_t::OpenGL:
	{
		switch(lnxDesc.GetDisplayProtocol())
		{
		case DisplayProtocol_t::X11:
			return CreateX11OpenGLWindow((const GLX11WindowDesc&)lnxDesc);
		case DisplayProtocol_t::Wayland:
			return CreateWLOpenGLWindow((const GLWLWindowDesc&)lnxDesc);
		default:
			return Result::CreateFailure<PWindow>(Format("Trying to create an OpenGL Linux window but an invalid display protocol was given %s.", TEnum<DisplayProtocol_t>::ToString(lnxDesc.GetDisplayProtocol()).data()));
		}
	}
	case RenderBackend_t::Vulkan:
	{
		switch(lnxDesc.GetDisplayProtocol())
		{
		case DisplayProtocol_t::X11:
			return CreateX11VulkanWindow((const VkX11WindowDesc&)lnxDesc);
		case DisplayProtocol_t::Wayland:
			return CreateWLVulkanWindow((const VkWLWindowDesc&)lnxDesc);
		default:
			return Result::CreateFailure<PWindow>(Format("Trying to create an Vulkan Linux window but an invalid display protocol was given %s.", TEnum<DisplayProtocol_t>::ToString(lnxDesc.GetDisplayProtocol()).data()));
		}
	}
	default:
		return Result::CreateFailure<PWindow>(Format("Trying to create a Linux window but the given backend %s is not implemented or supported.", TEnum<RenderBackend_t>::ToString(lnxDesc.GetBackend()).data()));
	}
#endif

	if (output.HasFailed())
		return output;

	{
		LOCK(m_WindowMutex);
		m_Windows.push_back(output.GetValue());
	}

	return output;
}

void WindowManager::AccessWindows(const std::function<void(CSpan<PWindow>)>& accessFn) const
{
	SharedLock lock(m_WindowMutex);
	accessFn(CreateSpan(m_Windows));
}
