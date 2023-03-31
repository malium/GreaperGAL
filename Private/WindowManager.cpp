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
#elif PLT_LINUX

#endif

using namespace greaper;
using namespace greaper::gal;

SPtr<WindowManager> gWindowManager = {};
extern SPtr<GreaperGALLibrary> gGALLibrary;

void greaper::gal::WindowManager::OnManagerActivation(bool active, IInterface* oldInterface, const PInterface& newInterface) noexcept
{

}

void greaper::gal::WindowManager::OnNewManager(const PInterface& newInterface) noexcept
{

}

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
		QueryMonitors();
	}
	//glfwSetMonitorCallback(&OnMonitorChange);
}

void WindowManager::OnDeactivation(const PInterface& newDefault) noexcept
{
	m_Monitors.clear();
	//if (newDefault == nullptr) // If there's no new WindowManager disconnect callback
		//glfwSetMonitorCallback(nullptr);
}

void WindowManager::InitProperties() noexcept
{

}

void WindowManager::DeinitProperties() noexcept
{

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
	windowDesc.Scheduler->AddTask((SlimTask)[&output, &window, &windowDesc]()
		{
			EmptyResult rtn = window->Create(windowDesc);
			if (rtn.HasFailed())
				output = Result::CopyFailure<PWindow>(rtn);
			else
				output = Result::CreateSuccess((PWindow)window);
		});
}

TResult<PWindow> WindowManager::CreateWindow(const WindowDesc& windowDesc)
{
	WindowDesc desc = windowDesc;
	if(desc.Scheduler == nullptr)
		desc.Scheduler = SlimTaskScheduler::Create(m_ThreadManager, "GreaperWindow TaskScheduler"sv, 1, false);
	
	if (desc.Scheduler->GetWorkerCount() != 1)
		return Result::CreateFailure<PWindow>(Format("Trying to create a window with a scheduler that doesn't have exactly 1 worker, it has %d workers.", desc.Scheduler->GetWorkerCount()));
	
	TResult<PWindow> output;
#if PLT_WINDOWS
	switch (desc.GetBackend())
	{
	case RenderBackend_t::Native:
		WindowCreation<WinWindowImpl>(output, desc);
		break;
	case RenderBackend_t::OpenGL:
		WindowCreation<GLWinWindowImpl>(output, desc);
		break;
	case RenderBackend_t::Vulkan:
		WindowCreation<VkWinWindowImpl>(output, desc);
		break;
	default:
		return Result::CreateFailure<PWindow>(Format("Trying to create a Windows window but the given backend %s is not implemented.", TEnum<RenderBackend_t>::ToString(desc.GetBackend()).data()));
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
