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
	class IWindow; using PWindow = SPtr<IWindow>; using WWindow = WPtr<IWindow>;

	struct WindowDesc;
#if PLT_WINDOWS
	struct WinWindowDesc;
	struct WinGLWindowDesc;
	struct WinVkWindowDesc;
#elif PLT_LINUX
	struct X11WindowDesc;
	struct WLWindowDesc;
	struct GLX11WindowDesc;
	struct GLWLWindowDesc;
	struct VkX11WindowDesc;
	struct VkWLWindowDesc;
#endif

	class Monitor; using PMonitor = SPtr<Monitor>; using WMonitor = WPtr<Monitor>;
	class VideoMode; using PVideoMode = SPtr<VideoMode>; using WVideoMode = WPtr<VideoMode>;
}

#endif /* GAL_PREREQUISITES_H */