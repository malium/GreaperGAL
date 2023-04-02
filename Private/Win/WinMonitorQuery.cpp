/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "../../Public/Base/Monitor.h"
#include "../../../GreaperCore/Public/Win/Win32User.h"
#include "../../../GreaperCore/Public/Win/Win32GDI.h"

using namespace greaper;
using namespace greaper::gal;

struct MonitorInfo
{
	WCHAR DeviceName[32];
	bool Primary;
	math::Vector2i Resolution;
	math::Vector2i WorkArea;
	float HDPI;
	float VDPI;
	float DDPI;
};

struct AdapterInfo
{
	bool Active;
	bool Default;
	WCHAR DeviceName[32];
	Vector<MonitorInfo> Monitors;
	Vector<VideoModeConfig> VideoModes;
};

BOOL CALLBACK MonitorQuery(HMONITOR hMonitor, UNUSED HDC hDC, UNUSED LPRECT lpRect, LPARAM lParam)
{
	auto* davPtr = reinterpret_cast<Vector<AdapterInfo>*>((void*)lParam);
	if (!davPtr)
	{

		return true;
	}
	auto& dav = *davPtr;

	MONITORINFOEXW monInfo;
	ClearMemory(monInfo);
	monInfo.cbSize = sizeof(monInfo);
	if (!GetMonitorInfoW(hMonitor, &monInfo))
	{

		return true;
	}
	ssizet adapterIdx = -1;
	ssizet monitorIdx = -1;
	for (const auto& adapters : dav)
	{
		
	}
}

static void QueryMonitorsFromAdapter(AdapterInfo& adapterInfo)noexcept
{
	DISPLAY_DEVICEW monDev;
	for (DWORD i = 0; i < ULONG_MAX; ++i)
	{
		ClearMemory(monDev);
		monDev.cb = sizeof(monDev);
		if (EnumDisplayDevicesW(adapterInfo.DeviceName, i, &monDev, 0))
		{
			MonitorInfo info;
			wmemcpy(info.DeviceName, monDev.DeviceName, ArraySize(monDev.DeviceName));
			adapterInfo.Monitors.push_back(std::move(info));
		}
		else
		{
			break;
		}
	}
}

static void QueryVideoModesFromAdapter(AdapterInfo& adapterInfo)noexcept
{
	DEVMODEW devMode;
	for (DWORD i = 0; i < ULONG_MAX; ++i)
	{
		ClearMemory(devMode);
		devMode.dmSize = sizeof(devMode);
		if (EnumDisplaySettingsW(adapterInfo.DeviceName, i, &devMode))
		{
			VideoModeConfig config;
			config.Resolution.Set(devMode.dmPelsWidth, devMode.dmPelsHeight);
			config.Frequency = (uint16)devMode.dmDisplayFrequency;
			config.PixelDepth = (uint8)devMode.dmBitsPerPel;

			bool repeated = false;
			for (const auto& mode : adapterInfo.VideoModes)
			{
				if (memcmp(&mode.Resolution, &config.Resolution, sizeof(VideoModeConfig) - sizeof(WMonitor)) == 0)
				{
					repeated = true;
					break;
				}
			}
			if (repeated)
				continue;

			adapterInfo.VideoModes.push_back(std::move(config));
		}
	}
}

void greaper::gal::UpdateMonitorInfo(Vector<PMonitor>& monitors, sizet& mainMonitorIdx)
{
	DISPLAY_DEVICEW dispDev;
	Vector<AdapterInfo> adapters;
	for (DWORD i = 0; i < ULONG_MAX; ++i)
	{
		ClearMemory(dispDev);
		dispDev.cb = sizeof(dispDev);
		if (EnumDisplayDevicesW(nullptr, i, &dispDev, 0))
		{
			AdapterInfo adapter;

			adapter.Active = dispDev.StateFlags & DISPLAY_DEVICE_ACTIVE;
			adapter.Default = dispDev.StateFlags & DISPLAY_DEVICE_PRIMARY_DEVICE;
			
			memcpy(adapter.DeviceName, dispDev.DeviceName, ArraySize(dispDev.DeviceName) * sizeof(*adapter.DeviceName));

			QueryMonitorsFromAdapter(adapter);
			QueryVideoModesFromAdapter(adapter);
			adapters.push_back(std::move(adapter));
		}
		else
		{
			break;
		}
	}
	if (!EnumDisplayMonitors(nullptr, nullptr, &MonitorQuery, (LPARAM)((void*)&adapters)))
	{

	}
}