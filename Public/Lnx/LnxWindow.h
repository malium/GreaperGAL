/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_LNX_WINDOW_H
#define GAL_LNX_WINDOW_H 1

#include "../Base/IWindow.h"

ENUMERATION(DisplayProtocol, X11, Wayland);

namespace greaper::gal
{
	struct LnxWindowDesc : public WindowDesc
	{
	protected:
		DisplayProtocol_t DisplayProtocol = DisplayProtocol_t::COUNT;
		
	public:
		INLINE constexpr DisplayProtocol_t GetDisplayProtocol()const noexcept { return DisplayProtocol; }
	};
}

#endif /* GAL_LNX_WINDOW_H */