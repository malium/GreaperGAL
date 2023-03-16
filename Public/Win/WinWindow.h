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
		bool EnableDoubleClick = true;
		bool AlphaBlend = false;
	};
	
	class WinWindow : public IWindow
	{
	public:
		using MessageFn = std::function<LRESULT(WinWindow* window, WPARAM wParam, LPARAM lParam)>;
	protected:
		HWND m_WindowHandle;
		DWORD m_Style;
		DWORD m_StyleEx;
		DWORD m_LastMessageID;
		Map<UINT, MessageFn> m_MessageMap;

		INLINE EmptyResult _SetWinMessage(UINT messageID, MessageFn messageFn)noexcept
		{
			if(messageFn == nullptr)
				return Result::CreateFailure("WinWindow::SetWinMessage invalid messageFn function."sv);
			m_MessageMap[messageID] = messageFn;
			return Result::CreateSuccess();
		}
		INLINE EmptyResult _RemoveMessage(UINT messageID)noexcept
		{
			const auto findIT = m_MessageMap.find(messageID);
			if(findIT != m_MessageMap.end())
			{
				m_MessageMap.erase(findIT);
				return Result::CreateSuccess();
			}
			return Result::CreateFailure(Format("WinWindow::RemoveMessage couldn't find message id %d.", messageID));
		}

		virtual void SetDesc(const WindowDesc& desc)noexcept
		{
			
		}

	public:
		INLINE HWND GetOSHandle()const noexcept { SHAREDLOCK(m_Mutex); return m_WindowHandle; }
		
		INLINE DWORD GetCurrentStyle()const noexcept { SHAREDLOCK(m_Mutex); return m_Style; }
		
		INLINE DWORD GetCurrentStyleEX()const noexcept { SHAREDLOCK(m_Mutex); return m_StyleEx; }
		
		INLINE EmptyResult SetWinMessage(UINT messageID, MessageFn messageFn)noexcept
		{
			LOCK(m_Mutex);
			return _SetWinMessage(messageID, std::move(messageFn));
		}

		INLINE EmptyResult RemoveMessage(UINT messageID)noexcept
		{
			LOCK(m_Mutex);
			return _RemoveMessage(messageID);
		}

		INLINE DWORD GetLastMessageID()const noexcept { SHAREDLOCK(m_Mutex); return m_LastMessageID; }
	};
}

#endif /* GAL_WIN_WINDOW_H */