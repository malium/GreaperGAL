/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#ifdef GREAPER_MIN_WINDOWS_SUPPORTED
#undef GREAPER_MIN_WINDOWS_SUPPORTED
#endif

#define GREAPER_MIN_WINDOWS_SUPPORTED 0x0A00000A

#include "../ImplPrerequisites.h"
#include "../../../GreaperCore/Public/Win/Win32User.h"
#include "../../../GreaperCore/Public/Win/Win32GDI.h"
#include "../../../GreaperCore/Public/Win/Win32ShellScalingAPI.h"
#include "../GreaperGALDLL.h"
#include "../WindowManager.h"

using namespace greaper;
using namespace greaper::gal;

extern SPtr<GreaperGALLibrary> gGALLibrary;
static bool gDPIEnabled = false;
static Library gUser32;
static Library gShcore;
static SPtr<WindowManager::Win32DPIScalingProp_t> gDPIProp{};


static EmptyResult AcquireDPI()
{
	auto res = gUser32.Open(L"User32.dll"sv);
	if (res.HasFailed())
		return res;

	res = gShcore.Open(L"Shcore.dll"sv);
	if (res.HasFailed())
		return res;

	return Result::CreateSuccess();
}

static void ReleaseDPI()
{
	gDPIProp.reset();
	gUser32.Close();
	gShcore.Close();
}

static EmptyResult EnableUnaware()
{
	gGALLibrary->LogVerbose("Trying to enable Unaware DPI scaling...");

	auto successFn = []()
	{
		gDPIProp->SetValue(Win32DPIScaling_t::SYSTEM_AWARE, true);
		gGALLibrary->Log("Enabled Unaware DPI scaling!");
	};

	// first try SetProcessDpiAwarenessContext if fails use SetProcessDpiAwareness if fails use SetProcessDPIAware
	auto libRes = gUser32.GetFunction("SetProcessDpiAwarenessContext"sv);
	if (libRes.IsOk())
	{
		auto setProcessDpiAwarenessContext = (decltype(&SetProcessDpiAwarenessContext))libRes.GetValue();
		bool isOK = setProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_UNAWARE) != FALSE;
		if (isOK)
		{
			successFn();
			return Result::CreateSuccess();
		}
	}
	
	libRes = gUser32.GetFunction("SetProcessDpiAwareness"sv);
	if (libRes.HasFailed())
	{
		return Result::CreateFailure("Couldn't enable Unaware DPI scaling, function 'SetProcessDPIAware' was not found in User32.dll"sv);
	}

	auto setProcessDpiAwareness = (decltype(&SetProcessDpiAwareness))libRes.GetValue();
	HRESULT result = setProcessDpiAwareness(PROCESS_DPI_UNAWARE);
	if (result != S_OK && result != E_ACCESSDENIED)
	{
		return Result::CreateFailure("Couldn't enable Unaware DPI scaling."sv);
	}
	successFn();
	return Result::CreateSuccess();
}

static EmptyResult EnableUnawareGDIScaling()
{
	gGALLibrary->LogVerbose("Trying to enable UnawareGDIScaling DPI scaling...");

	auto libRes = gUser32.GetFunction("SetProcessDpiAwarenessContext"sv);
	if (libRes.HasFailed())
	{
		gGALLibrary->LogWarning("Couldn't enable UnawareGDIScaling DPI scaling, function 'SetProcessDpiAwarenessContext' was not found in User32.dll, trying Unaware.");
		return EnableUnaware();
	}

	auto setProcessDpiAwarenessContext = (decltype(&SetProcessDpiAwarenessContext))libRes.GetValue();
	bool isOK = setProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_UNAWARE_GDISCALED) != FALSE;
	if (!isOK)
	{
		const auto errorCode = GetLastError();
		gGALLibrary->LogWarning(Format("Couldn't enable UnawareGDIScaling DPI scaling, error code " I32_HEX_FMT " error message '%S', trying Unaware.", errorCode,
			OSPlatform::GetLastErrorAsString(errorCode).c_str()));
		return EnableUnaware();
	}
	gDPIProp->SetValue(Win32DPIScaling_t::UNAWARE_GDISCALING, true);
	gGALLibrary->Log("Enabled UnawareGDIScaling DPI scaling!");
	return Result::CreateSuccess();
}

static EmptyResult EnableSystemAware()
{
	gGALLibrary->LogVerbose("Trying to enable SystemAware DPI scaling...");

	auto successFn = []()
	{
		gDPIProp->SetValue(Win32DPIScaling_t::SYSTEM_AWARE, true);
		gGALLibrary->Log("Enabled SystemAware DPI scaling!");
	};

	// first try SetProcessDpiAwarenessContext if fails use SetProcessDpiAwareness if fails use SetProcessDPIAware
	auto libRes = gUser32.GetFunction("SetProcessDpiAwarenessContext"sv);
	if (libRes.IsOk())
	{
		auto setProcessDpiAwarenessContext = (decltype(&SetProcessDpiAwarenessContext))libRes.GetValue();
		bool isOK = setProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_SYSTEM_AWARE) != FALSE;
		if (isOK)
		{
			successFn();
			return Result::CreateSuccess();
		}
	}

	libRes = gShcore.GetFunction("SetProcessDpiAwareness"sv);
	if (libRes.IsOk())
	{
		auto setProcessDpiAwareness = (decltype(&SetProcessDpiAwareness))libRes.GetValue();
		HRESULT result = setProcessDpiAwareness(PROCESS_SYSTEM_DPI_AWARE);
		if (result == S_OK || result == E_ACCESSDENIED)
		{
			successFn();
			return Result::CreateSuccess();
		}
	}

	libRes = gUser32.GetFunction("SetProcessDPIAware"sv);
	if (libRes.HasFailed())
	{
		gGALLibrary->LogWarning("Couldn't enable SystemAware DPI scaling, function 'SetProcessDPIAware' was not found in User32.dll, trying UnawareGDIScaling.");
		return EnableUnawareGDIScaling();
	}

	auto setProcessDPIAware = (decltype(&SetProcessDPIAware))libRes.GetValue();
	bool isOK = setProcessDPIAware() != FALSE;
	if (!isOK)
	{
		gGALLibrary->LogWarning("Couldn't enable SystemAware DPI scaling, trying UnawareGDIScaling.");
		return EnableUnawareGDIScaling();
	}

	successFn();
	return Result::CreateSuccess();
}

static EmptyResult EnableMonitorAware()
{
	gGALLibrary->LogVerbose("Trying to enable MonitorAware DPI scaling...");

	auto successFn = []()
	{
		gDPIProp->SetValue(Win32DPIScaling_t::MONITOR_AWARE, true);
		gGALLibrary->Log("Enabled MonitorAware DPI scaling!");
	};

	// first try SetProcessDpiAwarenessContext if fails use SetProcessDpiAwareness
	auto libRes = gUser32.GetFunction("SetProcessDpiAwarenessContext"sv);
	if (libRes.IsOk())
	{
		auto setProcessDpiAwarenessContext = (decltype(&SetProcessDpiAwarenessContext))libRes.GetValue();
		bool isOK = setProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE) != FALSE;
		if (isOK)
		{
			successFn();
			return Result::CreateSuccess();
		}
	}

	libRes = gShcore.GetFunction("SetProcessDpiAwareness"sv);
	if (libRes.HasFailed())
	{
		gGALLibrary->LogWarning("Couldn't enable MonitorAware DPI scaling, function 'SetProcessDpiAwareness' was not found in Shcore.dll, trying SystemAware.");
		return EnableSystemAware();
	}

	auto setProcessDpiAwareness = (decltype(&SetProcessDpiAwareness))libRes.GetValue();
	HRESULT result = setProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE);
	if (result != S_OK && result != E_ACCESSDENIED)
	{
		gGALLibrary->LogWarning("Couldn't enable MonitorAware DPI scaling, trying SystemAware.");
		return EnableSystemAware();
	}
	successFn();
	return Result::CreateSuccess();
}

static EmptyResult EnableMonitorAwareV2()
{
	gGALLibrary->LogVerbose("Trying to enable MonitorAwareV2 DPI scaling...");

	auto libRes = gUser32.GetFunction("SetProcessDpiAwarenessContext"sv);
	if (libRes.HasFailed())
	{
		gGALLibrary->LogWarning("Couldn't enable MonitorAwareV2 DPI scaling, function 'SetProcessDpiAwarenessContext' was not found in User32.dll, trying MonitorAware.");
		return EnableMonitorAware();
	}

	auto setProcessDpiAwarenessContext = (decltype(&SetProcessDpiAwarenessContext))libRes.GetValue();
	bool isOK = setProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2) != FALSE;
	if (!isOK)
	{
		const auto errorCode = GetLastError();
		gGALLibrary->LogWarning(Format("Couldn't enable MonitorAwareV2 DPI scaling, error code " I32_HEX_FMT " error message '%S', trying MonitorAware.", errorCode,
			OSPlatform::GetLastErrorAsString(errorCode).c_str()));
		return EnableMonitorAware();
	}
	gDPIProp->SetValue(Win32DPIScaling_t::MONITOR_AWARE_V2, true);
	gGALLibrary->Log("Enabled MonitorAwareV2 DPI scaling!");
	return Result::CreateSuccess();
}

EmptyResult EnableDPI()
{
	if (gDPIEnabled)
		return Result::CreateSuccess();

	gGALLibrary->LogVerbose("Trying to enable DPI scaling...");

	EmptyResult enableRes;

	auto propRes = gGALLibrary->GetProperty(WindowManager::Win32DPIScalingName);
	if (propRes.HasFailed() || (propRes.IsOk() && propRes.GetValue().expired()))
	{
		gGALLibrary->LogWarning(Format("EnableDPI() Couldn't find %s property, error: %s. Trying all possibilities.", WindowManager::Win32DPIScalingName.data(), propRes.GetFailMessage().c_str()));

		auto acquireRes = AcquireDPI();
		if (acquireRes.HasFailed())
		{
			ReleaseDPI();
			return acquireRes;
		}

		enableRes = EnableMonitorAwareV2();
		if (enableRes.HasFailed())
		{
			ReleaseDPI();
			return enableRes;
		}
	}
	else
	{
		gDPIProp = (SPtr<WindowManager::Win32DPIScalingProp_t>)propRes.GetValue().lock();
	}

	auto acquireRes = AcquireDPI();
	if (acquireRes.HasFailed())
	{
		ReleaseDPI();
		return acquireRes;
	}

	auto propDPIValue = gDPIProp->GetValueCopy();
	switch (propDPIValue)
	{
	case Win32DPIScaling_t::UNAWARE:
		enableRes = EnableUnaware();
		break;
	case Win32DPIScaling_t::SYSTEM_AWARE:
		enableRes = EnableSystemAware();
		break;
	case Win32DPIScaling_t::MONITOR_AWARE:
		enableRes = EnableMonitorAware();
		break;
	case Win32DPIScaling_t::MONITOR_AWARE_V2:
		enableRes = EnableMonitorAwareV2();
		break;
	case Win32DPIScaling_t::UNAWARE_GDISCALING:
		enableRes = EnableUnawareGDIScaling();
		break;
	default:
		gGALLibrary->LogWarning(Format("Unhandled Win32DPIScaling '%s'. Trying all DPI possiblities.",
			TEnum<Win32DPIScaling_t>::ToString(propDPIValue).data()));
		enableRes = EnableMonitorAwareV2();
		break;
	}

	if (enableRes.HasFailed())
	{
		ReleaseDPI();
		return enableRes;
	}
	ReleaseDPI();
	gDPIEnabled = true;
	return Result::CreateSuccess();
}