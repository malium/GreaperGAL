/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#ifndef GAL_VK_WIN_WINDOW_IMPL_H
#define GAL_VK_WIN_WINDOW_IMPL_H 1

#include "../ImplPrerequisites.h"
#include "../../Public/Win/VkWinWindow.h"

namespace greaper::gal
{
	class VkWinWindowImpl final : public VkWinWindow
	{
	public:
		EmptyResult Create(const WindowDesc& windowDesc)noexcept override;
	};
}

#endif /* GAL_VK_WIN_WINDOW_IMPL_H */