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

#define DEBUG_WM_CLOSE TRUE
#define DEBUG_WM_DESTROY TRUE
#define DEBUG_WM_SIZE TRUE
#define DEBUG_WM_SHOWWINDOW TRUE
#define DEBUG_WM_ENABLE TRUE
#define DEBUG_WM_MOVE TRUE
#define DEBUG_WM_ACTIVATEAPP TRUE

static LRESULT CALLBACK WindowMessageProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	auto* wnd = reinterpret_cast<WinWindowImpl*>(GetWindowLongPtrW(hWnd, GWLP_USERDATA));

	return (wnd != nullptr) ? 
		wnd->OnWindowProc(hWnd, uMsg, wParam, lParam) : 
		DefWindowProcW(hWnd, uMsg, wParam, lParam);
}

LRESULT WinWindowImpl::WM_CLOSE_MSG(UNUSED WPARAM wParam, UNUSED LPARAM lParam)
{
#if DEBUG_WM_CLOSE
	printf_s("WM_CLOSE\n");
#endif
	m_ShouldClose = true;
	DestroyWindow(m_WindowHandle);
	return 0;
}

LRESULT WinWindowImpl::WM_DESTROY_MSG(WPARAM wParam, LPARAM lParam)
{
#if DEBUG_WM_CLOSE
	printf_s("WM_DESTROY\n");
#endif
	m_ShouldClose = true;
	m_WindowHandle = nullptr;
	return DefWindowProcW(m_WindowHandle, m_LastMessageID, wParam, lParam);
}

LRESULT greaper::gal::WinWindowImpl::WM_SHOWWINDOW_MSG(WPARAM wParam, LPARAM lParam)
{
	switch (wParam)
	{
	case TRUE:
		printf_s("WM_SHOWWINDOW TRUE\n");
		break;
	case FALSE:
		printf_s("WM_SHOWWINDOW FALSE\n");
		break;
	default:
		printf_s("WM_SHOWWINDOW UNKNOWN\n");
		break;
	}

	switch (lParam)
	{
	case SW_OTHERUNZOOM:
		printf_s("WM_SHOWWINDOW - SW_OTHERUNZOOM uncovered because a maximize window was restored or minimized\n");
		break;
	case SW_OTHERZOOM:
		printf_s("WM_SHOWWINDOW - SW_OTHERZOOM covered by another window that has been maximized\n");
		break;
	case SW_PARENTCLOSING:
		printf_s("WM_SHOWWINDOW - SW_PARENTCLOSING window's owner window is being minimized\n");
		break;
	case SW_PARENTOPENING:
		printf_s("WM_SHOWWINDOW - SW_PARENTOPENING window's owner window is being restored\n");
	}
	return DefWindowProcW(m_WindowHandle, m_LastMessageID, wParam, lParam);
}

LRESULT greaper::gal::WinWindowImpl::WM_SIZE_MSG(WPARAM wParam, LPARAM lParam)
{
#if DEBUG_WM_SIZE
#define PRINT(...) printf(__VA_ARGS__)
#else
#define PRINT(...)
#endif
	auto oldState = m_State;
	switch (wParam)
	{
	case SIZE_MAXHIDE:
		PRINT("WM_SIZE - SIZE_MAXHIDE Message is sent to all pop-up windows when some other window is maximized\n");
		break;
	case SIZE_MAXIMIZED:
		PRINT("WM_SIZE - SIZE_MAXIMIZED The window has been maximized\n");
		m_State = WindowState_t::Maximized;
		break;
	case SIZE_MAXSHOW:
		PRINT("WM_SIZE - SIZE_MAXSHOW Message is sent to all pop-up windows when some other window has been restored to its former size\n");
		break;
	case SIZE_MINIMIZED:
		PRINT("WM_SIZE - SIZE_MINIMIZED The window has been minimized\n");
		m_State = WindowState_t::Minimized;
		break;
	case SIZE_RESTORED:
		PRINT("WM_SIZE - SIZE_RESTORED The window has been resized, but neither the SIZE_MINIMIZED nor SIZE_MAXIMIZED value applies\n");
		m_State = WindowState_t::Normal;
		break;
	}

	if (oldState != m_State)
	{
		if (oldState == WindowState_t::Minimized)
			m_IsVisible = true;
		if (m_State == WindowState_t::Minimized)
			m_IsVisible = false;
		m_WindowStateChangedEvt.Trigger(m_This, m_State, WindowState_t::Maximized);
	}
	
	m_RenderSize.Set(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam));
	PRINT("New client size (%dx%d)\n", m_RenderSize.X, m_RenderSize.Y);
	return DefWindowProcW(m_WindowHandle, m_LastMessageID, wParam, lParam);

#undef PRINT
}

LRESULT greaper::gal::WinWindowImpl::WM_ENABLE_MSG(WPARAM wParam, LPARAM lParam)
{
	printf_s("WM_ENABLE %s\n", wParam == TRUE ? "TRUE" : "FALSE");
	return DefWindowProcW(m_WindowHandle, m_LastMessageID, wParam, lParam);
}

LRESULT greaper::gal::WinWindowImpl::WM_MOVE_MSG(WPARAM wParam, LPARAM lParam)
{
	m_Position.Set(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam));
#if DEBUG_WM_MOVE
	printf_s("WM_MOVE (%d, %d)\n", m_Position.X, m_Position.Y);
#endif
	return DefWindowProcW(m_WindowHandle, m_LastMessageID, wParam, lParam);
}

LRESULT greaper::gal::WinWindowImpl::WM_ACTIVATEAPP_MSG(WPARAM wParam, LPARAM lParam)
{
	m_HasFocus = wParam == TRUE;
#if DEBUG_WM_ACTIVATEAPP
	printf_s("WM_ACTIVATEAPP %s\n", m_HasFocus ? "TRUE" : "FALSE");
#endif
	return DefWindowProcW(m_WindowHandle, m_LastMessageID, wParam, lParam);
}

void greaper::gal::WinWindowImpl::AddWinMessages() noexcept
{
	LOCK(m_MessageMutex);
#define SETMSG(command, function)\
_SetWinMessage(command, [this](WPARAM wParam, LPARAM lParam) { return function(wParam, lParam); })

	SETMSG(WM_CLOSE, WM_CLOSE_MSG);
	SETMSG(WM_DESTROY, WM_DESTROY_MSG);
#if DEBUG_WM_SHOWWINDOW
	SETMSG(WM_SHOWWINDOW, WM_SHOWWINDOW_MSG);
#endif
#if DEBUG_WM_ENABLE
	SETMSG(WM_ENABLE, WM_ENABLE_MSG);
#endif
	SETMSG(WM_SIZE, WM_SIZE_MSG);
	SETMSG(WM_MOVE, WM_MOVE_MSG);
	SETMSG(WM_ACTIVATEAPP, WM_ACTIVATEAPP_MSG);


#undef SETMSG
}

EmptyResult WinWindowImpl::Create(const WindowDesc& windowDesc)noexcept
{
	WinWindowDesc desc = (const WinWindowDesc&)windowDesc;

	m_ThreadID = CUR_THID();
	m_TaskScheduler = desc.Scheduler;
	m_Mode = desc.Mode;
	m_State = desc.State;
	m_ResizingEnabled = desc.ResizingEnabled;
	m_MaxSize = desc.MaxSize;
	m_MinSize = desc.MinSize;

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

	if (desc.Size.X > 0 && desc.Size.Y > 0)
		m_Size = desc.Size;
	else
		m_Size.Set(1280, 720);

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
		dwStyle = WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX;
		if (m_ResizingEnabled)
			dwStyle |= WS_THICKFRAME;

		if (m_State == WindowState_t::Minimized)
			dwStyle |= WS_ICONIC;
		if (m_State == WindowState_t::Maximized)
			dwStyle |= WS_MAXIMIZE;

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
	if (desc.EnableDoubleClick)
		wc.style |= CS_DBLCLKS;
	wc.lpfnWndProc = &WindowMessageProc;
	wc.hIcon = LoadIconW(nullptr, IDI_APPLICATION);
	wc.hCursor = LoadCursorW(nullptr, IDC_ARROW);
	wc.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_WINDOW + 1);
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = gWindowClassID.data();
	wc.hIconSm = LoadIconW(nullptr, IDI_APPLICATION);
	wc.cbWndExtra = sizeof(this);

	const auto regClassRtn = RegisterClassExW(&wc);

	if (regClassRtn == 0)
	{
		const auto errCode = GetLastError();
		return Result::CreateFailure(Format("RegisterClassExW failed with error code " I32_HEX_FMT ", error message '%S'.", errCode,
			OSPlatform::GetLastErrorAsString(errCode).c_str()));
	}

	auto wTitle = StringUtils::ToWIDE(desc.Title);

	HWND parentWindow = nullptr;
	if (desc.ParentWindow != nullptr)
		parentWindow = ((SPtr<WinWindow>)desc.ParentWindow)->GetOSHandle();

	AddWinMessages();

	m_WindowHandle = CreateWindowExW(dwStyleEx, gWindowClassID.data(), wTitle.c_str(),
		WS_CLIPCHILDREN | WS_CLIPSIBLINGS | dwStyle,
		CW_USEDEFAULT, CW_USEDEFAULT, m_Size.X, m_Size.Y, parentWindow, nullptr, wc.hInstance, nullptr);

	if (m_WindowHandle == nullptr)
	{
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
			return Result::CreateFailure(Format("SetWindowLongPtrW failed with code " I32_HEX_FMT ", error message '%S'.", errorCode,
				OSPlatform::GetLastErrorAsString(errorCode).c_str()));
		}
	}

	ChangeWindowMessageFilterEx(m_WindowHandle, WM_DROPFILES, MSGFLT_ALLOW, nullptr);
	ChangeWindowMessageFilterEx(m_WindowHandle, WM_COPYDATA, MSGFLT_ALLOW, nullptr);
	ChangeWindowMessageFilterEx(m_WindowHandle, WM_COPYGLOBALDATA, MSGFLT_ALLOW, nullptr);

	if (desc.StartVisible)
	{
		switch (m_State)
		{
		case WindowState_t::Maximized:
			::ShowWindow(m_WindowHandle, SW_MAXIMIZE);
			SetForegroundWindow(m_WindowHandle);
			break;
		case WindowState_t::Minimized:
			::ShowWindow(m_WindowHandle, SW_MINIMIZE);
			break;
		default:
			::ShowWindow(m_WindowHandle, SW_SHOWNORMAL);
			SetForegroundWindow(m_WindowHandle);
			break;
		}
	}

	if (desc.StartFocused)
	{
		SetFocus(m_WindowHandle);
	}
	
	UpdateWindow(m_WindowHandle);

	
	//DestroyWindow(m_WindowHandle);
	//m_WindowHandle = nullptr;
	//return Result::CreateFailure("Not implemented"sv);
	return Result::CreateSuccess();
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeWindowSize(math::Vector2i size)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeWindowPosition(math::Vector2i size)
{
	return Result::CreateFailure("Not implemented"sv);
}

TResult<String> greaper::gal::WinWindowImpl::_GetWindowTitle() const
{
	const auto lengthRtn = GetWindowTextLengthW(m_WindowHandle);
	if (lengthRtn == 0)
	{
		const auto err = GetLastError();
		if (err != 0)
			return Result::CreateFailure<String>(Format("GetWindowTextLengthW failed, errorCode %" I32_HEX_FMT " errorMessage %S.", OSPlatform::GetLastErrorAsString(err).c_str()));
	}
	WString title;
	title.resize(lengthRtn);
	const auto rtn = GetWindowTextW(m_WindowHandle, title.data(), (int)title.size());
	if (rtn == 0 && lengthRtn != rtn)
	{
		const auto err = GetLastError();
		if (err != 0)
			return Result::CreateFailure<String>(Format("GetWindowTextW failed, errorCode %" I32_HEX_FMT " errorMessage %S.", OSPlatform::GetLastErrorAsString(err).c_str()));
	}
	return Result::CreateSuccess(StringUtils::FromWIDE(title));
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeWindowPositionAnchor(AnchoredPosition_t anchor)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeWindowTitle(StringView title)
{
	auto rtn = SetWindowTextW(m_WindowHandle, StringUtils::ToWIDE(title).c_str());
	if (rtn != 0)
		return Result::CreateSuccess();
	const auto err = GetLastError();
	return Result::CreateFailure(Format("SetWindowTextW failed, errorCode %" I32_HEX_FMT " errorMessage %S.", OSPlatform::GetLastErrorAsString(err).c_str()));
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeWindowMode(WindowMode_t mode)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeWindowState(WindowState_t state)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_ShowWindow()
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_HideWindow()
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_RequestFocus()
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_EnableResizing(bool enable)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeMaxWindowSize(math::Vector2i maxSize, bool changeCurrent)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeMinWindowSize(math::Vector2i minSize, bool changeCurrent)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_ChangeMonitor(PMonitor monitor)
{
	return Result::CreateFailure("Not implemented"sv);
}

TResult<String> greaper::gal::WinWindowImpl::_GetClipboardText() const
{
	return Result::CreateFailure<String>("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_SetClipboardText(StringView text)const
{
	return Result::CreateFailure("Not implemented"sv);
}

TResult<bool> greaper::gal::WinWindowImpl::_HasClipboardText()const
{
	return Result::CreateFailure<bool>("Not implemented"sv);
}

EmptyResult greaper::gal::WinWindowImpl::_PollEvents()const
{
	MSG msg;
	while (PeekMessageW(&msg, m_WindowHandle, 0, 0, PM_REMOVE) != 0)
	{
		TranslateMessage(&msg);

		DispatchMessageW(&msg);
	}
	return Result::CreateSuccess();
}

EmptyResult greaper::gal::WinWindowImpl::_WaitForEvents() const
{
	MSG msg;
	auto msgRtn = GetMessageW(&msg, m_WindowHandle, 0, 0);
	if (msgRtn > -1)
	{
		TranslateMessage(&msg);

		DispatchMessageW(&msg);

		return Result::CreateSuccess();
	}
	const auto err = GetLastError();
	return Result::CreateFailure(Format("GetMessageW failed, errorCode %" I32_HEX_FMT " errorMessage %S.", OSPlatform::GetLastErrorAsString(err).c_str()));
}

EmptyResult greaper::gal::WinWindowImpl::_SwapWindow()const
{
	/* No-op */
	return Result::CreateSuccess();
}

EmptyResult greaper::gal::WinWindowImpl::_CloseWindow()
{
	return Result::CreateFailure("Not implemented"sv);
}

RenderBackend_t greaper::gal::WinWindowImpl::GetRenderBackend() const
{
	return RenderBackend_t::Native;
}

LRESULT greaper::gal::WinWindowImpl::OnWindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	//gGALLibrary->LogVerbose(Format("Message from window " I32_HEX_FMT " wParam %" PRIuPTR " lParam %" PRIiPTR, uMsg, wParam, lParam));


	//if (!m_ShouldClose)
	//{
	//	if (uMsg == WM_CLOSE)
	//	{
	//		LOCK(m_Mutex);
	//		m_ShouldClose = true;
	//		DestroyWindow(m_WindowHandle);
	//		m_WindowHandle = nullptr;
	//		return 0;
	//	}
	//	if (uMsg == WM_DESTROY || uMsg == WM_QUIT)
	//	{
	//		LOCK(m_Mutex);
	//		m_ShouldClose = true;
	//	}
	//}
	MessageFn* fn = nullptr;
	{
		SHAREDLOCK(m_MessageMutex);
		const auto it = m_MessageMap.find(uMsg);
		if (it != m_MessageMap.end())
			fn = &it->second;
		m_LastMessageID = uMsg;
	}
	if (fn != nullptr)
		return (*fn)(wParam, lParam);
	
	return DefWindowProcW(hWnd, uMsg, wParam, lParam);
}