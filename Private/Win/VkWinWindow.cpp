/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "../../Public/Win/VkWinWindow.h"

using namespace greaper;
using namespace greaper::gal;

TResult<PWindow> greaper::gal::CreateWinNativeVulkanWindow(const WindowDesc& windowDesc)
{
	auto desc = (const WinVkWindowDesc&)windowDesc;

	return TResult<PWindow>();
}