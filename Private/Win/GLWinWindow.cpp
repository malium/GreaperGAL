/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "GLWinWindow.h"

using namespace greaper;
using namespace greaper::gal;

EmptyResult GLWinWindowImpl::Create(const WindowDesc& windowDesc) noexcept
{
	// We are on window thread here
	GLWinWindowDesc desc = (const GLWinWindowDesc&)windowDesc;
	
}
