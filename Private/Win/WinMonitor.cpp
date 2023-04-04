/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "../../Public/Base/Monitor.h"
#include "../../../GreaperCore/Public/Win/Win32User.h"
#include "../../../GreaperCore/Public/Win/Win32GDI.h"
#include "../GreaperGALDLL.h"

using namespace greaper;
using namespace greaper::gal;

extern SPtr<GreaperGALLibrary> gGALLibrary;

struct MonitorInfo
{
	WCHAR DeviceName[32];
	HMONITOR Handle;
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

static BOOL CALLBACK MonitorQuery(HMONITOR hMonitor, UNUSED HDC hDC, UNUSED LPRECT lpRect, LPARAM lParam)
{
	auto* davPtr = reinterpret_cast<Vector<AdapterInfo>*>((void*)lParam);
	if (!davPtr)
	{
		gGALLibrary->LogError(String{ "Trying to retrieve the monitor info, but the Vector of AdapterInfo was not received."sv });
		return true;
	}
	auto& dav = *davPtr;

	MONITORINFOEXW monInfo;
	ClearMemory(monInfo);
	monInfo.cbSize = sizeof(monInfo);
	if (!GetMonitorInfoW(hMonitor, &monInfo))
	{
		const auto err = GetLastError();
		gGALLibrary->LogError(Format("Trying to retrieve the monitor info, but something went wrong, error: " I32_HEX_FMT ".", err));
		return true;
	}
	ssizet adapterIdx = -1;
	ssizet monitorIdx = -1;

	sizet i = 0, j = 0;
	for (const auto& adapter : dav)
	{
		const auto& monitors = adapter.Monitors;
		j = 0;
		for (const auto& monitor : monitors)
		{
			if (wcsncmp(monInfo.szDevice, monitor.DeviceName, ArraySize(monitor.DeviceName)) == 0)
			{
				adapterIdx = i;
				monitorIdx = j;
				break;
			}
			++j;
		}
		
		if (adapterIdx >= 0 && monitorIdx >= 0)
			break;

		++i;
	}
	if (adapterIdx < 0 || monitorIdx < 0)
	{
		gGALLibrary->LogError(Format("Trying to retrieve the monitor info, the given monitor '%S' was not found.", monInfo.szDevice));
		return true;
	}

	auto& monitorInfo = dav[adapterIdx].Monitors[monitorIdx];
	monitorInfo.Primary = (monInfo.dwFlags & MONITORINFOF_PRIMARY) > 0;
	const math::Vector2i distanceTo00 = { -monInfo.rcMonitor.left, -monInfo.rcMonitor.top };

	monitorInfo.Resolution.Set(
		((monInfo.rcMonitor.right - monInfo.rcMonitor.left) + distanceTo00.X),
		((monInfo.rcMonitor.bottom - monInfo.rcMonitor.top) + distanceTo00.Y)
	);

	monitorInfo.WorkArea.Set(
		((monInfo.rcWork.right - monInfo.rcWork.left) + distanceTo00.X),
		((monInfo.rcWork.bottom - monInfo.rcWork.top) + distanceTo00.Y)
	);

	monitorInfo.Handle = hMonitor;

	// DPI 
	switch (OSPlatform::GetWindowsVersion())
	{
	case WindowsVersion_t::Windows7:
	case WindowsVersion_t::Windows8:
	// Get System DPI
	{
		HDC hDCScreen = GetDC(nullptr);
		const auto dpix = GetDeviceCaps(hDCScreen, LOGPIXELSX);
		const auto dpiy = GetDeviceCaps(hDCScreen, LOGPIXELSY);
		monitorInfo.HDPI = dpix / (float)USER_DEFAULT_SCREEN_DPI;
		monitorInfo.VDPI = dpiy / (float)USER_DEFAULT_SCREEN_DPI;
		ReleaseDC(nullptr, hDCScreen);
	}
		break;
	case WindowsVersion_t::Windows81:
	case WindowsVersion_t::Windows10:

		break;
	default:

		break;
	}

	return true;
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
		else
		{
			break;
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
			
			wmemcpy(adapter.DeviceName, dispDev.DeviceName, ArraySize(dispDev.DeviceName));

			QueryMonitorsFromAdapter(adapter);
			QueryVideoModesFromAdapter(adapter);
			adapters.push_back(std::move(adapter));
		}
		else
		{
			break;
		}
	}
	if (!EnumDisplayMonitors(nullptr, nullptr, &::MonitorQuery, (LPARAM)((void*)&adapters)))
	{

	}
}