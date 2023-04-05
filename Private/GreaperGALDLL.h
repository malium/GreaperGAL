/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GREAPER_GAL_DLL_H
#define GREAPER_GAL_DLL_H 1

#include "ImplPrerequisites.h"
#include "../../GreaperCore/Public/IGreaperLibrary.h"

#ifdef GREAPER_GAL_DLL

namespace greaper::gal
{
	class GreaperGALLibrary : public TGreaperLibrary<GreaperGALLibrary>
	{
	public:
		static constexpr Uuid LibraryUUID = Uuid{ 0x5DECEE34, 0x86A911ED, 0xA1EB0242, 0xAC120002 };
		static constexpr StringView LibraryName = "GreaperGAL"sv;

		GreaperGALLibrary() = default;

		void Initialize()noexcept override;

		void AddManagers()noexcept override;

		void RemoveManagers()noexcept override;

		void Deinitialize()noexcept override;

		uint32 GetLibraryVersion()const noexcept override { return GREAPER_GAL_VERSION; }
	};
}

#endif // GREAPER_DISP_DLL

#endif /* GREAPER_GAL_DLL_H */