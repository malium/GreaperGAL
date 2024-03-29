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

		static constexpr StringView Win32DPIScalingName = "Win32DPIScaling"sv;
		using Win32DPIScalingProp_t = TProperty<Win32DPIScaling_t>;

		// These events are triggered by all windows, if you want a single window event trigger, you must connect with the events triggered by the window itself
		using WindowCreationEvent_t = Event<const PWindow&>;
		using WindowDestructionEvent_t = Event<const PWindow&>;
		using WindowMovedEvent_t = Event<const PWindow&, math::Vector2i, math::Vector2i>;
		using WindowResizedEvent_t = Event<const PWindow&, math::Vector2i, math::Vector2i>;
		using WindowModeChangedEvent_t = Event<const PWindow&, WindowMode_t, WindowMode_t>;
		using WindowStateChangedEvent_t = Event<const PWindow&, WindowState_t, WindowState_t>;

		using MonitorConnectedEvent_t = Event<const PMonitor& /* monitor */>;
		using MonitorDisconnectedEvent_t = Event<const PMonitor& /* monitor */>;
		using MonitorMainChangedEvent_t = Event<const PMonitor& /* previous */, const PMonitor& /* current */>;
		using MonitorMainVideoModeChangedEvent_t = Event<const PMonitor&, const PVideoMode& /* previous */, const PVideoMode& /* current */>;

		virtual TResult<PWindow> CreateWindow(const WindowDesc& windowDesc) = 0;

		virtual PMonitor GetMainMonitor()const = 0;
		
		virtual void AccessMonitors(const std::function<void(CSpan<SPtr<Monitor>>)>& accessFn)const = 0;

		virtual void AccessWindows(const std::function<void(CSpan<PWindow>)>& accessFn)const = 0;

		virtual WPtr<Win32DPIScalingProp_t> GetWin32DPIScaling()const noexcept = 0;

		virtual WindowCreationEvent_t& GetWindowCreationEvent()const noexcept = 0;

		virtual WindowDestructionEvent_t& GetWindowDestructionEvent()const noexcept = 0;

		virtual WindowMovedEvent_t& GetWindowMovedEvent()const noexcept = 0;

		virtual WindowResizedEvent_t& GetWindowResizedEvent()const noexcept = 0;

		virtual WindowModeChangedEvent_t& GetWindowModeChangedEvent()const noexcept = 0;

		virtual WindowStateChangedEvent_t& GetWindowStateChangedEvent()const noexcept = 0;

		virtual MonitorConnectedEvent_t& GetMonitorConnectedEvent()const noexcept = 0;

		virtual MonitorDisconnectedEvent_t& GetMonitorDisconnectedEvent()const noexcept = 0;

		virtual MonitorMainChangedEvent_t& GetMonitorMainChangedEvent()const noexcept = 0;

		virtual MonitorMainVideoModeChangedEvent_t& GetMonitorMainVideoModeChangedEvent()const noexcept = 0;
	};
}

#endif /* GAL_I_WINDOW_MANAGER_H */