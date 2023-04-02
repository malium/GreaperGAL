/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_VIDEO_MODE_H
#define GAL_VIDEO_MODE_H 1

#include "../GALPrerequisites.h"
#include "../../../GreaperMath/Public/Vector2.h"

namespace greaper::gal
{
	struct VideoModeConfig
	{
		WMonitor ParentMonitor;
		math::Vector2i Resolution;
		uint16 Frequency;
		uint8 PixelDepth;
	};

	class VideoMode
	{
		WMonitor m_Monitor;
		math::Vector2i m_Resolution = math::Vector2i(0,0);
		uint16 m_Frequency = 0;
		uint8 m_PixelDepth = 0;

	public:
		constexpr VideoMode()noexcept = default;
		VideoMode(const VideoMode&) = default;
		VideoMode(VideoMode&&)noexcept = default;
		VideoMode& operator=(const VideoMode&) = default;
		VideoMode& operator=(VideoMode&&)noexcept = default;

		void SetConfig(const VideoModeConfig& config)noexcept;

		INLINE constexpr const math::Vector2i& GetResolution()const noexcept { return m_Resolution; }

		INLINE WMonitor GetMonitor()const noexcept { return m_Monitor; }

		INLINE constexpr uint16 GetFrequency()const noexcept { return m_Frequency; }

		INLINE constexpr uint8 GetPixelDepth()const noexcept { return m_PixelDepth; }
	};

	INLINE void VideoMode::SetConfig(const VideoModeConfig& config)noexcept
	{
		m_Monitor = config.ParentMonitor;
		m_Resolution = config.Resolution;
		m_Frequency = config.Frequency;
		m_PixelDepth = config.PixelDepth;
	}
}

#endif /* GAL_VIDEO_MODE_H */