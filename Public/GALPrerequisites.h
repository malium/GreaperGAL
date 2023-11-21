/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_PREREQUISITES_H
#define GAL_PREREQUISITES_H 1

#include "../../GreaperCore/Public/CorePrerequisites.h"
#include "../../GreaperMath/Public/MathPrerequisites.h"

#ifdef GREAPER_GAL_VERSION
#undef GREAPER_GAL_VERSION
#endif
#define GREAPER_GAL_VERSION VERSION_SETTER(0, 0, 1, 0)

namespace greaper::gal
{
	class IWindowManager; using PWindowManager = SPtr<IWindowManager>; using WWindowManager = WPtr<IWindowManager>;
	class IWindow;
	struct IWindowDesc;
	using PWindow = SPtr<IWindow>; using WWindow = WPtr<IWindow>;

#if PLT_WINDOWS
	class WinWindow;
	struct WinWindowDesc;
	class GLWinWindow;
	struct GLWinWindowDesc;
	class VkWinWindow;
	struct VkWinWindowDesc;
#elif PLT_LINUX
	struct LnxWindowDesc;
	class LnxWindow;
	class GLLnxWindow;
	struct GLLnxWindowDesc;
	class VkLnxWindow;
	struct VkLnxWindowDesc;
	class Wayland;
	class WL_Display;
	class WL_Surface;
#endif

	class Monitor; using PMonitor = SPtr<Monitor>; using WMonitor = WPtr<Monitor>;
	class VideoMode; using PVideoMode = SPtr<VideoMode>; using WVideoMode = WPtr<VideoMode>;
}

#endif /* GAL_PREREQUISITES_H */