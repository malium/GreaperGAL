/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_WIN_VK_WINDOW_H
#define GAL_WIN_VK_WINDOW_H 1

#include "WinWindow.h"

namespace greaper::gal
{
	struct VkWinWindowDesc : public WinWindowDesc
	{
	protected:
		RenderBackend_t Backend = RenderBackend_t::Vulkan;
	public:
		
	};
	
	class VkWinWindow : public WinWindow
	{
		
	};
}

#endif /* GAL_WIN_VK_WINDOW_H */