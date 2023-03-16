/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#ifndef GAL_WIN_WINDOW_IMPL_H
#define GAL_WIN_WINDOW_IMPL_H 1

#include "../ImplPrerequisites.h"
#include "../../Public/Win/WinWindow.h"

namespace greaper::gal
{
	class WinWindowImpl final : public WinWindow
	{
	public:
		EmptyResult Create(const WindowDesc& windowDesc)noexcept override;
	};
}

#endif /* GAL_WIN_WINDOW_IMPL_H */