/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "../../Public/Win/WinWindow.h"

using namespace greaper;
using namespace greaper::gal;

TResult<PWindow> CreateWinNativeWindow(const WindowDesc& windowDesc)
{
	auto desc = (const WinWindowDesc&)windowDesc;

	return TResult<PWindow>();
}