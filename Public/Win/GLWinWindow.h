/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_WIN_GL_WINDOW_H
#define GAL_WIN_GL_WINDOW_H 1

#include "WinWindow.h"
#include "../../../GreaperCore/Public/Win/Win32GDI.h"
#include "../OpenGL/GALWGL.h"
#include "../OpenGL/GLDefines.h"

namespace greaper::gal
{
	struct WinGLWindowDesc : public WinWindowDesc
	{
		int32 VersionMajor = -1; // Negative values selects the maximum version supported by the adapter
		int32 VersionMinor = -1; // Negative values selects the maximum version supported by the adapter
		OpenGLProfile_t Profile = OpenGLProfile_t::Core;
		bool ContextDebug = GREAPER_DEBUG; // GL_KHR_debug
		OpenGLContextRobustness_t ContextRobustness = OpenGLContextRobustness_t::NoRobustness;
		OpenGLReleaseBehaviour_t ContextReleaseBehaviour = OpenGLReleaseBehaviour_t::Flush; // GL_KHR_context_flush_control
		bool ContextGenerateErrors = true; // GL_KHR_no_error
		PWindow SharedContextWindow = PWindow();
	};
	
	class WinGLWindow : public WinWindow
	{

	};
}

#endif /* GAL_WIN_GL_WINDOW_H */