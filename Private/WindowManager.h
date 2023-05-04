/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_WINDOW_MANAGER_H
#define GAL_WINDOW_MANAGER_H 1

#include "ImplPrerequisites.h"
#include "../Public/IWindowManager.h"
#include "../../GreaperCore/Public/IApplication.h"
#include "../../GreaperCore/Public/Concurrency.h"

namespace greaper::gal
{
	class WindowManager final : public IWindowManager
	{
		enum PropertiesIndices
		{
			Win32DPIScaling,

			COUNT
		};

		mutable RWMutex m_MonitorMutex;
		Vector<PMonitor> m_Monitors;
		sizet m_MainMonitor;

		mutable RWMutex m_WindowMutex;
		Vector<PWindow> m_Windows;

		mutable WindowCreationEvent_t m_WindowCreationEvent;
		mutable WindowDestructionEvent_t m_WindowDestructionEvent;
		mutable WindowMovedEvent_t m_WindowMovedEvent;
		mutable WindowResizedEvent_t m_WindowResizedEvent;
		mutable WindowModeChangedEvent_t m_WindowModeChangedEvent;
		mutable WindowStateChangedEvent_t m_WindowStateChangedEvent;
		mutable MonitorConnectedEvent_t m_MonitorConnectedEvent;
		mutable MonitorDisconnectedEvent_t m_MonitorDisconnectedEvent;
		mutable MonitorMainChangedEvent_t m_MonitorMainChangedEvent;
		mutable MonitorMainVideoModeChangedEvent_t m_MonitorMainVideoModeChangedEvent;

	public:
		WindowManager()noexcept = default;
		~WindowManager()noexcept = default;

		void OnInitialization()noexcept override;

		void OnDeinitialization()noexcept override;

		void OnActivation(const PInterface& oldDefault)noexcept override;

		void OnDeactivation(UNUSED const PInterface& newDefault)noexcept override;

		void InitProperties()noexcept override;

		void DeinitProperties()noexcept override;
		
		void QueryMonitors();

		TResult<PWindow> CreateWindow(const WindowDesc& windowDesc)override;

		PMonitor GetMainMonitor() const override;
		
		void AccessMonitors(const std::function<void(CSpan<PMonitor>)>& accessFn) const override;

		void AccessWindows(const std::function<void(CSpan<PWindow>)>& accessFn) const override;

		WPtr<Win32DPIScalingProp_t> GetWin32DPIScaling()const noexcept override { return (WPtr<Win32DPIScalingProp_t>)m_Properties[(std::size_t)Win32DPIScaling]; }

		WindowCreationEvent_t& GetWindowCreationEvent()const noexcept override { return m_WindowCreationEvent; }

		WindowDestructionEvent_t& GetWindowDestructionEvent()const noexcept override { return m_WindowDestructionEvent;  }

		WindowMovedEvent_t& GetWindowMovedEvent()const noexcept override { return m_WindowMovedEvent; }

		WindowResizedEvent_t& GetWindowResizedEvent()const noexcept override { return m_WindowResizedEvent; }

		WindowModeChangedEvent_t& GetWindowModeChangedEvent()const noexcept override { return m_WindowModeChangedEvent; }

		WindowStateChangedEvent_t& GetWindowStateChangedEvent()const noexcept override { return m_WindowStateChangedEvent; }

		MonitorConnectedEvent_t& GetMonitorConnectedEvent()const noexcept override { return m_MonitorConnectedEvent; }

		MonitorDisconnectedEvent_t& GetMonitorDisconnectedEvent()const noexcept override { return m_MonitorDisconnectedEvent; }

		MonitorMainChangedEvent_t& GetMonitorMainChangedEvent()const noexcept override { return m_MonitorMainChangedEvent; }

		MonitorMainVideoModeChangedEvent_t& GetMonitorMainVideoModeChangedEvent()const noexcept override { return m_MonitorMainVideoModeChangedEvent; }
	};
}

#endif /* GAL_WINDOW_MANAGER_H */