/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_WIN_WINDOW_H
#define GAL_WIN_WINDOW_H 1

#include "../Base/IWindow.h"
#include "../../../GreaperCore/Public/Win/Win32User.h"

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
		using MessageFn = std::function<LRESULT(WPARAM wParam, LPARAM lParam)>;

	protected:
		HWND m_WindowHandle;
		HDC m_DC;
		UINT m_LastMessageID;
		mutable RWMutex m_MessageMutex;
		Map<UINT, MessageFn> m_MessageMap;

		inline EmptyResult _SetWinMessage(UINT messageID, MessageFn messageFn)noexcept
		{
			if(messageFn == nullptr)
				return Result::CreateFailure("WinWindow::SetWinMessage invalid messageFn function."sv);
			m_MessageMap[messageID] = messageFn;
			return Result::CreateSuccess();
		}
		inline EmptyResult _RemoveMessage(UINT messageID)noexcept
		{
			const auto findIT = m_MessageMap.find(messageID);
			if(findIT != m_MessageMap.end())
			{
				m_MessageMap.erase(findIT);
				return Result::CreateSuccess();
			}
			return Result::CreateFailure(Format("WinWindow::RemoveMessage couldn't find message id %d.", messageID));
		}

	public:
		virtual ~WinWindow()noexcept = default;

		INLINE HWND GetOSHandle()const noexcept { return m_WindowHandle; }

		INLINE HDC GetDC()const noexcept { return m_DC; }
		
		INLINE EmptyResult SetWinMessage(UINT messageID, MessageFn messageFn)noexcept
		{
			LOCK(m_MessageMutex);
			return _SetWinMessage(messageID, std::move(messageFn));
		}

		INLINE EmptyResult RemoveMessage(UINT messageID)noexcept
		{
			LOCK(m_MessageMutex);
			return _RemoveMessage(messageID);
		}

		INLINE DWORD GetLastMessageID()const noexcept { return m_LastMessageID; }
	};
}

#endif /* GAL_WIN_WINDOW_H */