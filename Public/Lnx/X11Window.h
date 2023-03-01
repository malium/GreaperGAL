/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_X11_WINDOW_H
#define GAL_X11_WINDOW_H 1

#include "../Base/IWindow.h"

namespace greaper::gal
{
	struct X11WindowDesc : public WindowDesc
	{
		StringView X11ClassName = ""sv;
		StringView X11InstanceName = ""sv;
	};
	
	class X11Window : public IWindow
	{
		
	};
}

#endif /* GAL_X11_WINDOW_H */