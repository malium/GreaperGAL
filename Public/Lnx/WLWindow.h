/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_WL_WINDOW_H
#define GAL_WL_WINDOW_H 1

#include "LnxWindow.h"

namespace greaper::gal
{
	struct WLWindowDesc : public LnxWindowDesc
	{
	protected:
		DisplayProtocol_t DisplayProtocol = DisplayProtocol_t::Wayland;
		
	public:
	};
	
	class WLWindow : public IWindow
	{
		
	};
}

#endif /* GAL_WL_WINDOW_H */