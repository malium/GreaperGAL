/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "../../Public/Win/GLWinWindow.h"

using namespace greaper;
using namespace greaper::gal;

TResult<PWindow> greaper::gal::CreateWinNativeOpenGLWindow(const WindowDesc& windowDesc)
{
	auto desc = (const WinGLWindowDesc&)windowDesc;

	return TResult<PWindow>();
}

TResult<PWindow> greaper::gal::CreateWinEGLOpenGLWindow(const WindowDesc& windowDesc)
{
	auto desc = (const WinGLWindowDesc&)windowDesc;

	return TResult<PWindow>();
}