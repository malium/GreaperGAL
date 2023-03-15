/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_GL_X11_WINDOW_H
#define GAL_GL_X11_WINDOW_H 1

#include "X11Window.h"
#include "../OpenGL/GLDefines.h"
#include "../OpenGL/GALGLX.h"

namespace greaper::gal
{
	struct GLX11WindowDesc : public X11WindowDesc
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
	
	class GLX11Window : public X11Window
	{
		
	};
}

#endif /* GAL_GL_X11_WINDOW_H */