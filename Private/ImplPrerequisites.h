/***********************************************************************************
*   Copyright 2022 Marcos S�nchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_IMPL_PREREQUISITES_H
#define GAL_IMPL_PREREQUISITES_H 1

#include "../Public/GALPrerequisites.h"

namespace greaper::gal
{
	class GreaperGALLibrary;
	class WindowManager;

	#if PLT_WINDOWS
		TResult<PWindow> CreateWinNativeWindow(const WinWindowDesc& windowDesc);
		TResult<PWindow> CreateWinOpenGLWindow(const WinGLWindowDesc& windowDescdesc);
		TResult<PWindow> CreateWinVulkanWindow(const WinVkWindowDesc& windowDesc);
#elif PLT_LINUX
		TResult<PWindow> CreateX11Window(const X11WindowDesc& windowDesc);
		TResult<PWindow> CreateX11OpenGLWindow(const GLX11WindowDesc& windowDesc);
		TResult<PWindow> CreateX11VulkanWindow(const VkX11WindowDesc& windowDesc);
		TResult<PWindow> CreateWLWindow(const WLWindowDesc& windowDesc);
		TResult<PWindow> CreateWLOpenGLWindow(const GLWLWindowDesc& windowDesc);
		TResult<PWindow> CreateWLVulkanWindow(const VkWLWindowDesc& windowDesc);
#endif
}

#endif /* GAL_IMPL_PREREQUISITES_H */