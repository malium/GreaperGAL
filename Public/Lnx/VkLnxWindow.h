/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_VK_LNX_WINDOW_H
#define GAL_VK_LNX_WINDOW_H 1

#include "LnxWindow.h"

namespace greaper::gal
{
	struct VkLnxWindowDesc : public LnxWindowDesc
	{
	protected:
		RenderBackend_t Backend = RenderBackend_t::Vulkan;
	public:
		
	};
	
	class VkLnxWindow : public LnxWindow
	{
		
	};
}

#endif /* GAL_VK_LNX_WINDOW_H */