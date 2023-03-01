/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_VK_X11_WINDOW_H
#define GAL_VK_X11_WINDOW_H 1

#include "X11Window.h"

namespace greaper::gal
{
	struct VkX11WindowDesc : public X11WindowDesc
	{
	protected:
		RenderBackend_t Backend = RenderBackend_t::Vulkan;
	public:
		
	};
	
	class VkX11Window : public X11Window
	{
		
	};
}

#endif /* GAL_VK_X11_WINDOW_H */