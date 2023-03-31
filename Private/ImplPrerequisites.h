/***********************************************************************************
*   Copyright 2022 Marcos S�nchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_IMPL_PREREQUISITES_H
#define GAL_IMPL_PREREQUISITES_H 1

#include "../Public/GALPrerequisites.h"

namespace greaper::gal
{
	class GreaperGALLibrary;
	class WindowManager;

	void UpdateMonitorInfo(Vector<PMonitor>& monitors, sizet& mainMonitorIdx);
}

#endif /* GAL_IMPL_PREREQUISITES_H */