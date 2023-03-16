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
