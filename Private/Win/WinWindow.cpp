/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "WinWindow.h"
#include "../WindowManager.h"
#include "../GreaperGALDLL.h"
#include "../../../GreaperCore/Public/Win/Win32Base.h"
#include "../../../GreaperCore/Public/StringUtils.h"

using namespace greaper;
using namespace greaper::gal;

extern SPtr<WindowManager> gWindowManager;
extern SPtr<GreaperGALLibrary> gGALLibrary;

static constexpr WStringView gWindowClassID = L"GreaperWindow"sv;

static LRESULT CALLBACK WindowMessageProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return DefWindowProcW(hWnd, uMsg, wParam, lParam);
}

EmptyResult WinWindowImpl::Create(const WindowDesc& windowDesc)noexcept
{
	// We are on window thread here
	WinWindowDesc desc = (const WinWindowDesc&)windowDesc;
//	return Result::CreateFailure("Not implemented"sv);

	m_Mutex.lock(); // we don't want any modification except ours

	// retrieve monitor
	if (windowDesc.Monitor != nullptr)
		desc.Monitor = windowDesc.Monitor;
	else
		desc.Monitor = gWindowManager->GetMainMonitor();

	WNDCLASSEXW wc;
	ClearMemory(wc);
	wc.cbSize = sizeof(wc);
	RECT windowRect;
	ClearMemory(windowRect);
	DWORD dwStyle = 0, dwStyleEx = 0;
	m_Position.SetZero();

	if (desc.Size.X <= 0 || desc.Size.Y <= 0)
		desc.Size.Set(1280, 720);

	switch(desc.Mode)
	{
	case WindowMode_t::FullScreen:
	{
		dwStyle = WS_POPUP;
		dwStyleEx = WS_EX_APPWINDOW;
	}
	break;
	case WindowMode_t::Borderless:
	{
		dwStyle = WS_POPUP;
		dwStyleEx = WS_EX_APPWINDOW;
	}
	break;
	default:
		gGALLibrary->LogWarning(Format("Trying to create a Windows window, but an invalid WindowMode %s was given, falling back to Windowed.", TEnum<WindowMode_t>::ToString(desc.Mode).data()));
		desc.Mode = WindowMode_t::Windowed;
	case WindowMode_t::Windowed:
	{
		dwStyle = WS_CAPTION | WS_SYSMENU | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX;
		dwStyleEx = WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;
	}
	}

	auto wApp = gGALLibrary->GetApplication();
	if (!wApp.expired())
	{
		auto app = wApp.lock();
		auto wAppInstanceProp = app->GetAppInstance();
		if (!wAppInstanceProp.expired())
		{
			auto appInstanceProp = wAppInstanceProp.lock();
			wc.hInstance = (HINSTANCE)appInstanceProp->GetValueCopy();
		}
	}
	
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = &WindowMessageProc;
	wc.hIcon = LoadIconW(nullptr, IDI_APPLICATION);
	wc.hCursor = LoadCursorW(nullptr, IDC_ARROW);
	wc.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_WINDOW + 1);
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = gWindowClassID.data();
	wc.hIconSm = LoadIconW(nullptr, IDI_APPLICATION);
	wc.cbWndExtra = sizeof(this);

	const auto regFailed = RegisterClassExW(&wc) == 0;

	if (regFailed)
	{
		const auto errCode = GetLastError();
		m_Mutex.unlock();
		return Result::CreateFailure(Format("RegisterClassExW failed with code " I32_HEX_FMT, errCode));
	}

	auto wTitle = StringUtils::ToWIDE(desc.Title);

	HWND parentWindow = nullptr;
	if (desc.ParentWindow != nullptr)
		parentWindow = ((SPtr<WinWindow>)desc.ParentWindow)->GetOSHandle();

	m_WindowHandle = CreateWindowExW(dwStyleEx, gWindowClassID.data(), wTitle.c_str(),
		WS_CLIPCHILDREN | WS_CLIPSIBLINGS | dwStyle,
		CW_USEDEFAULT, CW_USEDEFAULT, desc.Size.X, desc.Size.Y, parentWindow, nullptr, wc.hInstance, this);

	if (m_WindowHandle == nullptr)
	{
		const auto errCode = GetLastError();
		m_Mutex.unlock();
		return Result::CreateFailure(Format("CreateWindowExW failed with code " I32_HEX_FMT, errCode));
	}

	//ChangeWindowMessageFilterEx(m_Handle, WM_DROPFILES, MSGFLT_ALLOW, nullptr);
	//ChangeWindowMessageFilterEx(m_Handle, WM_COPYDATA, MSGFLT_ALLOW, nullptr);
	//ChangeWindowMessageFilterEx(m_Handle, WM_COPYGLOBALDATA, MSGFLT_ALLOW, nullptr);

	::ShowWindow(m_WindowHandle, SW_SHOWNORMAL);
	SetForegroundWindow(m_WindowHandle);
	SetFocus(m_WindowHandle);
	UpdateWindow(m_WindowHandle);

	m_Mutex.unlock();
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowSize(math::Vector2i size)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowPosition(math::Vector2i size)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowPosition(AnchoredPosition_t anchor)
{
	return Result::CreateFailure("Not implemented"sv);
}

void greaper::gal::WinWindowImpl::SetWindowTitle(StringView title)
{
	Break("Not implemented.");
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowMode(WindowMode_t mode)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowState(WindowState_t state)
{
	return Result::CreateFailure("Not implemented"sv);
}

void greaper::gal::WinWindowImpl::ShowWindow()
{
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::HideWindow()
{
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::RequestFocus()
{
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::EnableResizing(bool enable)
{
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::SetResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent)
{
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::SetMaxWindowSize(math::Vector2i maxSize, bool changeCurrent)
{
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::SetMinWindowSize(math::Vector2i minSize, bool changeCurrent)
{
	Break("Not implemented.");
}

String greaper::gal::WinWindowImpl::GetClipboardText() const
{
	Break("Not implemented.");
	return String();
}

EmptyResult greaper::gal::WinWindowImpl::SetClipboardText(StringView text)
{
	return Result::CreateFailure("Not implemented"sv);
}

bool greaper::gal::WinWindowImpl::HasClipboardText()
{
	Break("Not implemented.");
	return false;
}

void greaper::gal::WinWindowImpl::SwapWindow()
{
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::CloseWindow()
{
	Break("Not implemented.");
}

RenderBackend_t greaper::gal::WinWindowImpl::GetRenderBackend() const
{
	return RenderBackend_t::Native;
}
