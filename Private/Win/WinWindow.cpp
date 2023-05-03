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
#include "../../../GreaperCore/Public/SlimTaskScheduler.h"
#include "../../../GreaperCore/Public/StringUtils.h"

using namespace greaper;
using namespace greaper::gal;

extern SPtr<WindowManager> gWindowManager;
extern SPtr<GreaperGALLibrary> gGALLibrary;

static constexpr WStringView gWindowClassID = L"GreaperWindow"sv;

/*
Message order:
WM_GETMINMAXINFO
WM_NCCREATE
WM_NCCALCSIZE
WM_CREATE
WM_SHOWWINDOW
WM_WINDOWPOSCHANGING
WM_WINDOWPOSCHANGING
WM_ACTIVATEAPP
WM_NCACTIVATE
WM_GETICON
WM_GETICON
WM_GETICON
WM_ACTIVATE
WM_IME_SETCONTEXT
WM_IME_NOTIFY
WM_SETFOCUS
WM_NCPAINT
WM_ERASEBKGND
WM_WINDOWPOSCHANGED
WM_SIZE
WM_MOVE
WM_PAINT
0x0090
WM_WINDOWPOSCHANGING
WM_WINDOWPOSCHANGED
WM_NCACTIVATE
WM_ACTIVATE
WM_ACTIVATEAPP
WM_KILLFOCUS
WM_IME_SETCONTEXT
WM_IME_NOTIFY
WM_DESTROY
WM_NCDESTROY
*/

#define ENSURE_WINDOW_THREAD()\
VerifyEqual(CUR_THID(), m_ThreadID, "A window call must be done from the window thread.")


static LRESULT CALLBACK WindowMessageProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	auto* wnd = reinterpret_cast<WinWindowImpl*>(GetWindowLongPtrW(hWnd, GWLP_USERDATA));
	if (wnd != nullptr)
		return wnd->OnWindowProc(hWnd, uMsg, wParam, lParam);

	return DefWindowProcW(hWnd, uMsg, wParam, lParam);
}

EmptyResult WinWindowImpl::Create(const WindowDesc& windowDesc)noexcept
{
	// We are on window thread here
	WinWindowDesc desc = (const WinWindowDesc&)windowDesc;
//	return Result::CreateFailure("Not implemented"sv);

	m_Mutex.lock(); // we don't want any modification except ours

	m_ThreadID = CUR_THID();
	m_TaskScheduler = desc.Scheduler;

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
		m_Mutex.unlock();
		const auto errCode = GetLastError();
		return Result::CreateFailure(Format("RegisterClassExW failed with error code " I32_HEX_FMT ", error message '%S'.", errCode,
			OSPlatform::GetLastErrorAsString(errCode).c_str()));
	}

	auto wTitle = StringUtils::ToWIDE(desc.Title);

	HWND parentWindow = nullptr;
	if (desc.ParentWindow != nullptr)
		parentWindow = ((SPtr<WinWindow>)desc.ParentWindow)->GetOSHandle();

	m_WindowHandle = CreateWindowExW(dwStyleEx, gWindowClassID.data(), wTitle.c_str(),
		WS_CLIPCHILDREN | WS_CLIPSIBLINGS | dwStyle,
		CW_USEDEFAULT, CW_USEDEFAULT, desc.Size.X, desc.Size.Y, parentWindow, nullptr, wc.hInstance, nullptr);

	if (m_WindowHandle == nullptr)
	{
		m_Mutex.unlock();
		const auto errCode = GetLastError();
		return Result::CreateFailure(Format("CreateWindowExW failed with code " I32_HEX_FMT ", error message '%S'.", errCode,
			OSPlatform::GetLastErrorAsString(errCode).c_str()));
	}

	auto swlpRet = SetWindowLongPtrW(m_WindowHandle, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(this));
	if (swlpRet == 0)
	{
		const auto errorCode = GetLastError();
		if (errorCode != 0)
		{
			DestroyWindow(m_WindowHandle);
			m_WindowHandle = nullptr;
			m_Mutex.unlock();
			return Result::CreateFailure(Format("SetWindowLongPtrW failed with code " I32_HEX_FMT ", error message '%S'.", errorCode,
				OSPlatform::GetLastErrorAsString(errorCode).c_str()));
		}
	}

	ChangeWindowMessageFilterEx(m_WindowHandle, WM_DROPFILES, MSGFLT_ALLOW, nullptr);
	ChangeWindowMessageFilterEx(m_WindowHandle, WM_COPYDATA, MSGFLT_ALLOW, nullptr);
	ChangeWindowMessageFilterEx(m_WindowHandle, WM_COPYGLOBALDATA, MSGFLT_ALLOW, nullptr);

	::ShowWindow(m_WindowHandle, SW_SHOWNORMAL);
	SetForegroundWindow(m_WindowHandle);
	SetFocus(m_WindowHandle);
	UpdateWindow(m_WindowHandle);

	
	//DestroyWindow(m_WindowHandle);
	//m_WindowHandle = nullptr;
	m_Mutex.unlock();
	//return Result::CreateFailure("Not implemented"sv);
	return Result::CreateSuccess();
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowSize(math::Vector2i size)
{
	ENSURE_WINDOW_THREAD();
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowPosition(math::Vector2i size)
{
	ENSURE_WINDOW_THREAD();
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowPosition(AnchoredPosition_t anchor)
{
	ENSURE_WINDOW_THREAD();
	return Result::CreateFailure("Not implemented"sv);
}

void greaper::gal::WinWindowImpl::SetWindowTitle(StringView title)
{
	ENSURE_WINDOW_THREAD();
	SetWindowTextW(m_WindowHandle, StringUtils::ToWIDE(title).c_str());
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowMode(WindowMode_t mode)
{
	ENSURE_WINDOW_THREAD();
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::ChangeWindowState(WindowState_t state)
{
	ENSURE_WINDOW_THREAD();
	return Result::CreateFailure("Not implemented"sv);
}

void greaper::gal::WinWindowImpl::ShowWindow()
{
	ENSURE_WINDOW_THREAD();
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::HideWindow()
{
	ENSURE_WINDOW_THREAD();
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::RequestFocus()
{
	ENSURE_WINDOW_THREAD();
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::EnableResizing(bool enable)
{
	ENSURE_WINDOW_THREAD();
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::SetResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent)
{
	ENSURE_WINDOW_THREAD();
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::SetMaxWindowSize(math::Vector2i maxSize, bool changeCurrent)
{
	ENSURE_WINDOW_THREAD();
	Break("Not implemented.");
}

void greaper::gal::WinWindowImpl::SetMinWindowSize(math::Vector2i minSize, bool changeCurrent)
{
	ENSURE_WINDOW_THREAD();
	Break("Not implemented.");
}

String greaper::gal::WinWindowImpl::GetClipboardText() const
{
	ENSURE_WINDOW_THREAD();
	return String();
}

EmptyResult greaper::gal::WinWindowImpl::SetClipboardText(StringView text)
{
	ENSURE_WINDOW_THREAD();
	return Result::CreateFailure("Not implemented"sv);
}

bool greaper::gal::WinWindowImpl::HasClipboardText()
{
	ENSURE_WINDOW_THREAD();
	Break("Not implemented.");
	return false;
}

void greaper::gal::WinWindowImpl::PollEvents()
{
	ENSURE_WINDOW_THREAD();
	MSG msg;
	while (PeekMessageW(&msg, m_WindowHandle, 0, 0, PM_REMOVE) != 0)
	{
		if (msg.message == WM_QUIT || msg.message == WM_CLOSE || msg.message == WM_DESTROY)
		{
			LOCK(m_Mutex);
			m_ShouldClose = true;
			break;
		}
		TranslateMessage(&msg);

		DispatchMessageW(&msg);
	}

}

void greaper::gal::WinWindowImpl::SwapWindow()
{
	ENSURE_WINDOW_THREAD();
	/* No-op */
}

void greaper::gal::WinWindowImpl::CloseWindow()
{
	ENSURE_WINDOW_THREAD();
	Break("Not implemented.");
}

RenderBackend_t greaper::gal::WinWindowImpl::GetRenderBackend() const
{
	return RenderBackend_t::Native;
}

LRESULT greaper::gal::WinWindowImpl::OnWindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	//gGALLibrary->LogVerbose(Format("Message from window " I32_HEX_FMT " wParam %" PRIuPTR " lParam %" PRIiPTR, uMsg, wParam, lParam));


	if (!m_ShouldClose)
	{
		if (uMsg == WM_CLOSE)
		{
			LOCK(m_Mutex);
			m_ShouldClose = true;
			DestroyWindow(m_WindowHandle);
			m_WindowHandle = nullptr;
			return 0;
		}
		if (uMsg == WM_DESTROY || uMsg == WM_QUIT)
		{
			LOCK(m_Mutex);
			m_ShouldClose = true;
		}
	}
	
	return DefWindowProcW(hWnd, uMsg, wParam, lParam);
}
