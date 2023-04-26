/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "../../Public/Win/WinMonitor.h"
#include "../WindowManager.h"
#include "../../../GreaperCore/Public/Win/Win32User.h"
#include "../../../GreaperCore/Public/Win/Win32GDI.h"
#include "../../../GreaperCore/Public/Win/Win32ShellScalingAPI.h"
#include "../GreaperGALDLL.h"
#include "../../../GreaperCore/Public/StringUtils.h"

using namespace greaper;
using namespace greaper::gal;

extern SPtr<GreaperGALLibrary> gGALLibrary;
extern SPtr<WindowManager> gWindowManager;

struct MonitorInfo
{
	WCHAR DeviceName[32];
	WCHAR DeviceString[128];
	WCHAR DeviceID[128];
	WCHAR DeviceKey[128];
	HMONITOR Handle = (HMONITOR)INVALID_HANDLE_VALUE;
	bool Primary = false;
	math::RectI SizeArea{};
	math::RectI WorkArea{};
	float DPI = 1.f;
};

struct AdapterInfo
{
	bool Active{};
	bool Default{};
	WCHAR DeviceName[32];
	WCHAR DeviceString[128];
	WCHAR DeviceID[128];
	WCHAR DeviceKey[128];
	Vector<MonitorInfo> Monitors{};
	Vector<VideoModeConfig> VideoModes{};
	ssizet DefaultVideoMode = -1;
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
		gGALLibrary->LogError(Format("Trying to retrieve the monitor info, but something went wrong, error code " I32_HEX_FMT " error message '%S'.", err,
			OSPlatform::GetLastErrorAsString(err).c_str()));
		return true;
	}
	ssizet adapterIdx = -1;
	ssizet monitorIdx = -1;

	sizet i = 0, j = 0;
	for (const auto& adapter : dav)
	{
		j = 0;
		if (wcsncmp(monInfo.szDevice, adapter.DeviceName, ArraySize(adapter.DeviceName)) == 0)
		{
			adapterIdx = i;
			monitorIdx = j;
			break;
		}
		//const auto& monitors = adapter.Monitors;
		//for (const auto& monitor : monitors)
		//{
		//	if (wcsncmp(monInfo.szDevice, monitor.DeviceName, ArraySize(monitor.DeviceName)) == 0)
		//	{
		//		adapterIdx = i;
		//		monitorIdx = j;
		//		break;
		//	}
		//	++j;
		//}
		
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
	monitorInfo.Primary = (monInfo.dwFlags & MONITORINFOF_PRIMARY) != 0;

	monitorInfo.Handle = hMonitor;

	// DPI 
	UINT dpix, dpiy;
	switch (OSPlatform::GetWindowsVersion())
	{
	case WindowsVersion_t::Windows7:
	case WindowsVersion_t::Windows8:
	// Get System DPI
	{
		HDC hDCScreen = GetDC(nullptr);
		dpix = (UINT)GetDeviceCaps(hDCScreen, LOGPIXELSX);
		dpiy = (UINT)GetDeviceCaps(hDCScreen, LOGPIXELSY);
		ReleaseDC(nullptr, hDCScreen);
	}
		break;
	case WindowsVersion_t::Windows81:
	case WindowsVersion_t::Windows10:
	{
		auto hRes = GetDpiForMonitor(hMonitor, MDT_DEFAULT, &dpix, &dpiy);
		if (hRes == E_INVALIDARG)
		{
			gGALLibrary->LogWarning("Something wen't wrong calling GetDpiForMonitor, INVALID ARGUMENTS.");
			return true;
		}
	}
		break;
	default:
		dpix = dpiy = USER_DEFAULT_SCREEN_DPI;
		break;
	}


	//RECT rcMonitorDPI, rcWorkDPI;
	//rcMonitorDPI.left = monInfo.rcMonitor.left;
	//rcMonitorDPI.right = rcMonitorDPI.left + MulDiv(monInfo.rcMonitor.right - rcMonitorDPI.left, USER_DEFAULT_SCREEN_DPI, dpix);
	//rcMonitorDPI.top = monInfo.rcMonitor.top;
	//rcMonitorDPI.bottom = rcMonitorDPI.top + MulDiv(monInfo.rcMonitor.bottom - rcMonitorDPI.top, USER_DEFAULT_SCREEN_DPI, dpiy);
	//
	//rcWorkDPI.left = rcMonitorDPI.left + MulDiv(monInfo.rcWork.left - rcMonitorDPI.left, USER_DEFAULT_SCREEN_DPI, dpix);
	//rcWorkDPI.right = rcMonitorDPI.left + MulDiv(monInfo.rcWork.right - rcMonitorDPI.left, USER_DEFAULT_SCREEN_DPI, dpix);
	//rcWorkDPI.top = rcMonitorDPI.top + MulDiv(monInfo.rcWork.top - rcMonitorDPI.top, USER_DEFAULT_SCREEN_DPI, dpiy);
	//rcWorkDPI.bottom = rcMonitorDPI.top + MulDiv(monInfo.rcWork.bottom - rcMonitorDPI.top, USER_DEFAULT_SCREEN_DPI, dpiy);

	//monitorInfo.Resolution.Set(Abs(monInfo.rcMonitor.right - monInfo.rcMonitor.left), Abs(monInfo.rcMonitor.bottom - monInfo.rcMonitor.top));
	monitorInfo.SizeArea.Set(monInfo.rcMonitor);
	monitorInfo.WorkArea.Set(monInfo.rcWork);
	monitorInfo.DPI = ((dpix + dpiy) * 0.5f) / (float)USER_DEFAULT_SCREEN_DPI;

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
			wmemcpy(info.DeviceString, monDev.DeviceString, ArraySize(monDev.DeviceString));
			wmemcpy(info.DeviceKey, monDev.DeviceKey, ArraySize(monDev.DeviceKey));
			wmemcpy(info.DeviceID, monDev.DeviceID, ArraySize(monDev.DeviceID));
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

static void QueryDefaultVideoMode(AdapterInfo& adapterInfo)noexcept
{
	DEVMODEW devMode;
	EnumDisplaySettingsW(adapterInfo.DeviceName, ENUM_CURRENT_SETTINGS, &devMode);

	for (std::size_t i = 0; i < adapterInfo.VideoModes.size(); ++i)
	{
		const auto& videoMode = adapterInfo.VideoModes[i];
		if ((DWORD)videoMode.Frequency == devMode.dmDisplayFrequency &&
			(DWORD)videoMode.PixelDepth == devMode.dmBitsPerPel &&
			videoMode.Resolution.X == devMode.dmPelsWidth &&
			videoMode.Resolution.Y == devMode.dmPelsHeight)
		{
			adapterInfo.DefaultVideoMode = i;
			break;
		}
	}
	if(adapterInfo.DefaultVideoMode < 0)
		adapterInfo.DefaultVideoMode = 0;
}

static void AddVideoModesToMonitorConfig(const Vector<VideoModeConfig>& vmcs, const PMonitor& monitor, WinMonitorConfig& config)noexcept
{
	config.VideoModes.reserve(vmcs.size());
	for (VideoModeConfig videoModeConfig : vmcs)
	{
		auto videoMode = PVideoMode(Construct<VideoMode>());
		videoModeConfig.ParentMonitor = (WMonitor)monitor;
		videoMode->SetConfig(videoModeConfig);
		config.VideoModes.push_back(std::move(videoMode));
	}
}

void greaper::gal::UpdateMonitorInfo(Vector<PMonitor>& monitors, sizet& mainMonitorIdx)
{
	DISPLAY_DEVICEW dispDev;
	Vector<AdapterInfo> adapters;
	ssizet monitorCount = 0;
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
			wmemcpy(adapter.DeviceString, dispDev.DeviceString, ArraySize(dispDev.DeviceString));
			wmemcpy(adapter.DeviceKey, dispDev.DeviceKey, ArraySize(dispDev.DeviceKey));
			wmemcpy(adapter.DeviceID, dispDev.DeviceID, ArraySize(dispDev.DeviceID));

			QueryMonitorsFromAdapter(adapter);
			if (adapter.Monitors.empty())
				continue;

			QueryVideoModesFromAdapter(adapter);
			if (adapter.VideoModes.empty())
				continue;

			QueryDefaultVideoMode(adapter);

			monitorCount += adapter.Monitors.size();

			adapters.push_back(std::move(adapter));
		}
		else
		{
			break;
		}
	}
	if (!EnumDisplayMonitors(nullptr, nullptr, &::MonitorQuery, (LPARAM)((void*)&adapters)))
	{
		gGALLibrary->LogWarning("EnumDisplayMonitors failed!");
	}

	// Remove non existant monitors and update information on the connected ones
	PMonitor oldMainMonitor = PMonitor();
	
	if (!monitors.empty())
	{
		if (monitors.size() > mainMonitorIdx)
			oldMainMonitor = monitors[mainMonitorIdx];
		for (std::size_t i = 0; i < monitors.size(); )
		{
			auto& monitor = monitors[i];
			auto& winMonitor = (SPtr<WinMonitor>&)monitor;
			ssizet adapterIdx = -1, monitorIdx = -1;
			for (std::size_t j = 0; j < adapters.size(); ++j)
			{
				const auto& adapter = adapters[j];
				for (std::size_t k = 0; k < adapter.Monitors.size(); ++k)
				{
					const auto& adapterMonitor = adapter.Monitors[k];
					if (winMonitor->GetOSHandle() == adapterMonitor.Handle)
					{
						adapterIdx = j;
						monitorIdx = k;
						break;
					}
				}
				if (adapterIdx >= 0 && monitorIdx >= 0)
					break;
			}
			if (adapterIdx < 0 || monitorIdx < 0)
			{
				gGALLibrary->LogVerbose(Format("Monitor %s has been disconnected.", monitor->GetName().c_str()));
				gWindowManager->GetMonitorDisconnectedEvent().Trigger(monitor);
				monitors.erase(monitors.begin() + i);
				continue;
			}

			const auto& curAdapter = adapters[adapterIdx];
			const auto& curMonitor = curAdapter.Monitors[monitorIdx];
			bool isCurMointorPrimary = curAdapter.Active && curAdapter.Default && curMonitor.Primary;

			bool mainVideoModeChanged = false;
			const auto& curVideoModeInfo = curAdapter.VideoModes[curAdapter.DefaultVideoMode];
			auto oldMainVideoMode = monitor->GetMainVideoMode();
			if (oldMainVideoMode != nullptr)
			{
				if (oldMainVideoMode->GetFrequency() != curVideoModeInfo.Frequency ||
					oldMainVideoMode->GetPixelDepth() != curVideoModeInfo.PixelDepth ||
					oldMainVideoMode->GetResolution() != curVideoModeInfo.Resolution)
				{
					mainVideoModeChanged = true;
					break;
				}
			}

			bool monitorInformationChanged = false;
			PVideoMode curMainVideoMode{};
			bool redoVideoModes = false;
			// Check if monitor changed the video modes
			if (monitor->GetVideoModes().size() == curAdapter.VideoModes.size())
			{
				// Maybe are the same but we have to check them all...
				for (const auto& videoMode : monitor->GetVideoModes())
				{
					if (!Contains(curAdapter.VideoModes, [&videoMode](const VideoModeConfig& vmc)
						{
							return videoMode->GetFrequency() != vmc.Frequency
								|| videoMode->GetPixelDepth() != vmc.PixelDepth
								|| videoMode->GetResolution() != vmc.Resolution;
						}))
					{
						redoVideoModes = true;
						break;
					}
				}
			}
			else
			{
				redoVideoModes = true;
			}

			// Do we need to submit a new config?
			if (monitor->GetDPI() != curMonitor.DPI ||
				monitor->GetSizeRect() != curMonitor.SizeArea ||
				monitor->GetWorkRect() != curMonitor.WorkArea ||
				monitor->IsPrimary() != isCurMointorPrimary ||
				redoVideoModes)
			{
				monitorInformationChanged = true;
			}

			if (monitorInformationChanged)
			{
				WinMonitorConfig config;
				config.SizeRect = curMonitor.SizeArea;
				config.WorkRect = curMonitor.WorkArea;
				config.Name = StringUtils::FromWIDE(curMonitor.DeviceString);
				AddVideoModesToMonitorConfig(curAdapter.VideoModes, monitor, config);
				//config.VideoModes.reserve(curAdapter.VideoModes.size());
				//for (VideoModeConfig videoModeConfig : curAdapter.VideoModes)
				//{
				//	auto videoMode = PVideoMode(Construct<VideoMode>());
				//	videoModeConfig.ParentMonitor = (WMonitor)monitor;
				//	videoMode->SetConfig(videoModeConfig);
				//	config.VideoModes.push_back(std::move(videoMode));
				//}
				config.MainVideoMode = curAdapter.DefaultVideoMode;
				config.DPI = curMonitor.DPI;
				config.Primary = isCurMointorPrimary;
				config.OSHandle = curMonitor.Handle;
				wmemcpy(config.DeviceName, curMonitor.DeviceName, ArraySize(curMonitor.DeviceName));
				monitor->SetConfig(config);
			}

			if (mainVideoModeChanged)
			{
				gGALLibrary->LogVerbose(Format("The main video mode from '%s' monitor has changed from [%dx%d](%dbits %dhz) to [%dx%d](%dbits %dhz).",
					oldMainVideoMode->GetMonitor().lock()->GetName().c_str(),
					oldMainVideoMode->GetResolution().X, oldMainVideoMode->GetResolution().Y, oldMainVideoMode->GetPixelDepth(), oldMainVideoMode->GetFrequency(),
					curMainVideoMode->GetResolution().X, curMainVideoMode->GetResolution().Y, curMainVideoMode->GetPixelDepth(), curMainVideoMode->GetFrequency()));
				gWindowManager->GetMonitorMainVideoModeChangedEvent().Trigger(monitor, oldMainVideoMode, curMainVideoMode);
			}

			++i;
		}

		// Check that the old monitors are at the correct place
		Vector<PMonitor> tmpMonitors;
		tmpMonitors.resize(monitorCount);
		for (const auto& tmpMonitor : monitors)
		{
			const auto& winMonitor = (const SPtr<WinMonitor>&)tmpMonitor;
			sizet newIndex = 0;
			bool found = false;
			for (std::size_t i = 0; i < adapters.size(); ++i)
			{
				const auto& adapter = adapters[i];
				for (std::size_t j = 0; j < adapter.Monitors.size(); ++j)
				{
					const auto& monitor = adapter.Monitors[j];
					if (monitor.Handle == winMonitor->GetOSHandle())
					{
						found = true;
						break;
					}
					++newIndex;
				}
			}
			if (!found)
				gGALLibrary->LogWarning("A non disconnected monitor was not found in the queried monitors!");
			else
				tmpMonitors[newIndex] = winMonitor;
		}
		std::swap(monitors, tmpMonitors);
	}
	else
	{
		monitors.resize(monitorCount);
	}
	
	// Add the new monitors
	sizet monitorIndex = 0;
	for (const auto& adapter : adapters)
	{
		for (const auto& monitor : adapter.Monitors)
		{
			if (monitors[monitorIndex] != nullptr)
			{
				++monitorIndex;
				continue; // Avoid already fine monitors with ok index
			}

			auto nMonitor = SPtr<WinMonitor>(Construct<WinMonitor>());

			WinMonitorConfig wmc;
			wmc.SizeRect = monitor.SizeArea;
			wmc.WorkRect = monitor.WorkArea;
			wmc.Name = StringUtils::FromWIDE(monitor.DeviceString);
			AddVideoModesToMonitorConfig(adapter.VideoModes, (const PMonitor&)nMonitor, wmc);
			wmc.MainVideoMode = adapter.DefaultVideoMode;
			wmc.DPI = monitor.DPI;
			wmc.Primary = adapter.Active && adapter.Default && monitor.Primary;
			wmc.OSHandle = monitor.Handle;
			wmemcpy(wmc.DeviceName, adapter.DeviceName, ArraySize(adapter.DeviceName));

			nMonitor->SetConfig(wmc);
			monitors[monitorIndex] = nMonitor;
			
			gGALLibrary->LogVerbose(Format("A new monitor is found! Name:%s Properties: (%d,%d)[%dx%d] DPI:%.3f Primary:%s.",
				nMonitor->GetName().c_str(), nMonitor->GetSizeRect().Left, nMonitor->GetSizeRect().Top,
				nMonitor->GetSizeRect().GetWidth(), nMonitor->GetSizeRect().GetHeight(),
				nMonitor->GetDPI(),
				nMonitor->IsPrimary() ? "true" : "false"));

			gWindowManager->GetMonitorConnectedEvent().Trigger((const PMonitor&)nMonitor);

			if (nMonitor->IsPrimary())
			{
				mainMonitorIdx = monitorIndex;
				gGALLibrary->LogVerbose("The main monitor has changed!");
				gWindowManager->GetMonitorMainChangedEvent().Trigger(oldMainMonitor, (const PMonitor&)nMonitor);
			}
			++monitorIndex;
		}
	}
}