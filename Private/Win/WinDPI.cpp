/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#ifdef GREAPER_MIN_WINDOWS_SUPPORTED
#undef GREAPER_MIN_WINDOWS_SUPPORTED
#endif

#define GREAPER_MIN_WINDOWS_SUPPORTED 0xFFFFFFFF

#include "../ImplPrerequisites.h"
#include "../../../GreaperCore/Public/Win/Win32User.h"
#include "../../../GreaperCore/Public/Win/Win32GDI.h"
#include "../GreaperGALDLL.h"

using namespace greaper;
using namespace greaper::gal;

extern SPtr<GreaperGALLibrary> gGALLibrary;

EmptyResult EnableDPI()
{
	gGALLibrary->LogVerbose(__FUNCSIG__ "Enabling DPI scaling...");

	Library User32(L"User32.dll");
	Verify(User32.IsOpen(), "User32.dll should be always available.");

	auto libRes = User32.GetFunction("SetProcessDpiAwarenessContext"sv);
	bool isOK = false;

	if (libRes.IsOk())
	{
		gGALLibrary->LogVerbose("");
		auto setProcessDpiAwarenessContext = (decltype(&SetProcessDpiAwarenessContext))libRes.GetValue();
		isOK = setProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2) != FALSE;

		if (isOK)
			return Result::CreateSuccess();
	}
	


#if(WINVER >= 0x0605) // Windows 10 1607

	SetProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2);
#elif(WINVER >= NTDDI_WINBLUE) // Windows 8.1
	SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE);
#else
	SetProcessDPIAware();
#endif
}