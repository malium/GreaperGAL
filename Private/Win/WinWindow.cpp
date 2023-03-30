/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "WinWindow.h"
#include "../WindowManager.h"
#include "../GreaperGALDLL.h"
#include "../../../GreaperCore/Public/Win/Win32Base.h"

using namespace greaper;
using namespace greaper::gal;

extern SPtr<WindowManager> gWindowManager;
extern SPtr<GreaperGALLibrary> gGALLibrary;

EmptyResult WinWindowImpl::Create(const WindowDesc& windowDesc)noexcept
{
	// We are on window thread here
	WinWindowDesc desc = (const WinWindowDesc&)windowDesc;
	return Result::CreateFailure("Not implemented"sv);

	m_Mutex.lock(); // we don't want any modification except ours

	// retrieve monitor
	PMonitor monitor;

	WNDCLASSEXW wc;
	ClearMemory(wc);
	wc.cbSize = sizeof(wc);
	RECT windowRect;
	ClearMemory(windowRect);
	m_Style = 0;
	m_StyleEx = 0;
	m_Position.SetZero();

	if(desc.Size.X <= 0)
		desc.Size.X = 1280;
	if(desc.Size.Y <= 0)
		desc.Size.Y = 720;

	switch(desc.Mode)
	{
	case WindowMode_t::FullScreen:
	{
		m_Style = WS_POPUP;
		m_StyleEx = WS_EX_APPWINDOW;
	}
	break;
	case WindowMode_t::Borderless:
	{
		m_Style = WS_POPUP;
		m_StyleEx = WS_EX_APPWINDOW;
	}
	break;
	default:
		gGALLibrary->LogWarning(Format("Trying to create a Windows window, but an invalid WindowMode %s was given, falling back to Windowed.", TEnum<WindowMode_t>::ToString(desc.Mode).data()));
		desc.Mode = WindowMode_t::Windowed;
	case WindowMode_t::Windowed:
	{
		m_Style = WS_CAPTION | WS_SYSMENU | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX;
		m_StyleEx = WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;
	}
	}
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
