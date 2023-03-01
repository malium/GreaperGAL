/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_WIN_WINDOW_H
#define GAL_WIN_WINDOW_H 1

#include "../Base/IWindow.h"
#include "../../../GreaperCore/Public/Win/Win32Base.h"

namespace greaper::gal
{
	struct WinWindowDesc : public WindowDesc
	{
		
	};
	
	class WinWindow : public IWindow
	{
	public:
		using MessageFn = std::function<LRESULT(WinWindow* window, WPARAM wParam, LPARAM lParam)>;
	protected:
		HWND m_WindowHandle;
		DWORD m_Style;
		DWORD m_StyleEx;
		Map<UINT, MessageFn> m_MessageMap;

	};
}

#endif /* GAL_WIN_WINDOW_H */