/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "VkWinWindow.h"

using namespace greaper;
using namespace greaper::gal;

EmptyResult VkWinWindowImpl::Create(const WindowDesc& windowDesc) noexcept
{
	// We are on window thread here
	VkWinWindowDesc desc = (const VkWinWindowDesc&)windowDesc;
}
