/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#ifndef GAL_GL_WIN_WINDOW_IMPL_H
#define GAL_GL_WIN_WINDOW_IMPL_H 1

#include "../ImplPrerequisites.h"
#include "../../Public/Win/GLWinWindow.h"

namespace greaper::gal
{
	class GLWinWindowImpl final : public GLWinWindow
	{
	public:
		EmptyResult Create(const WindowDesc& windowDesc)noexcept override;
	};
}

#endif /* GAL_GL_WIN_WINDOW_IMPL_H */