/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_WIN_MONITOR_H
#define GAL_WIN_MONITOR_H 1

#include "../Base/Monitor.h"
#include "../../../GreaperCore/Public/Win/Win32Base.h"

namespace greaper::gal
{
	struct WinMonitorConfig : public MonitorConfig
	{
		HMONITOR OSHandle;
		WCHAR DeviceName[32];
	};

	class WinMonitor final : public Monitor
	{
		HMONITOR m_OSHandle;
		WCHAR m_DeviceName[32];

	public:
		INLINE void SetConfig(const MonitorConfig& config)noexcept
		{
			Monitor::SetConfig(config);
			const auto& cfg = (const WinMonitorConfig&)config;

			m_OSHandle = cfg.OSHandle;
			wmemcpy(m_DeviceName, cfg.DeviceName, ArraySize(m_DeviceName));
		}

		INLINE HMONITOR GetOSHandle()const noexcept { return m_OSHandle; }

		INLINE const WCHAR* GetDeviceName()const noexcept { return m_DeviceName; }
	};
}

#endif /* GAL_WIN_MONITOR_H */