/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_I_WINDOW_MANAGER_H
#define GAL_I_WINDOW_MANAGER_H 1

#include "GALPrerequisites.h"
#include "../../GreaperCore/Public/Interface.h"
#include "Base/Monitor.h"
#include "Base/IWindow.h"

namespace greaper::gal
{
	class IWindowManager : public TInterface<IWindowManager>
	{
	public:
		static constexpr Uuid InterfaceUUID = Uuid{ 0xC47AC974, 0x86A811ED, 0xA1EB0242, 0xAC120002 };
		static constexpr StringView InterfaceName = "WindowManager"sv;

		// These events are triggered by all windows, if you want a single window event trigger, you must connect with the events triggered by the window itself
		using WindowCreationEvent_t = Event<const PWindow&>;
		using WindowDestructionEvent_t = Event<const PWindow&>;
		using WindowMovedEvent_t = Event<const PWindow&, math::Vector2i, math::Vector2i>;
		using WindowResizedEvent_t = Event<const PWindow&, math::Vector2i, math::Vector2i>;
		using WindowModeChangedEvent_t = Event<const PWindow&, WindowMode_t, WindowMode_t>;
		using WindowStateChangedEvent_t = Event<const PWindow&, WindowState_t, WindowState_t>;

		using MonitorConnected_t = Event<const PMonitor& /* monitor */>;
		using MonitorDisconnected_t = Event<const PMonitor& /* monitor */>;
		using MonitorMainChanged_t = Event<const PMonitor& /* previous */, const PMonitor& /* current */>;
		using MonitorMainVideoModeChanged_t = Event<const PVideoMode& /* previous */, const PVideoMode& /* current */>;

		virtual TResult<PWindow> CreateWindow(const WindowDesc& windowDesc) = 0;

		virtual SPtr<Monitor> GetMainMonitor()const = 0;
		
		virtual void AccessMonitors(const std::function<void(CSpan<SPtr<Monitor>>)>& accessFn)const = 0;

		virtual void AccessWindows(const std::function<void(CSpan<PWindow>)>& accessFn)const = 0;
	};
}

#endif /* GAL_I_WINDOW_MANAGER_H */