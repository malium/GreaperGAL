/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_GL_LNX_WINDOW_H
#define GAL_GL_LNX_WINDOW_H 1

#include "LnxWindow.h"
#include "../OpenGL/GLDefines.h"
#define WL_EGL_PLATFORM 1
#include "../OpenGL/GALEGL.h"


namespace greaper::gal
{
	struct GLLnxWindowDesc : public LnxWindowDesc
	{
	protected:
		RenderBackend_t Backend = RenderBackend_t::OpenGL;
	public:
		int32 VersionMajor = -1; // Negative values selects the maximum version supported by the adapter
		int32 VersionMinor = -1; // Negative values selects the maximum version supported by the adapter
		OpenGLProfile_t Profile = OpenGLProfile_t::Core;
		bool ContextDebug = GREAPER_DEBUG; // GL_KHR_debug
		OpenGLContextRobustness_t ContextRobustness = OpenGLContextRobustness_t::NoRobustness;
		OpenGLReleaseBehaviour_t ContextReleaseBehaviour = OpenGLReleaseBehaviour_t::Flush; // GL_KHR_context_flush_control
		bool ContextGenerateErrors = true; // GL_KHR_no_error
		PWindow SharedContextWindow = PWindow();
	};
	
	class GLLnxWindow : public LnxWindow
	{
		
	};
}

#endif /* GAL_GL_LNX_WINDOW_H */