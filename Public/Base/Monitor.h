/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_MONITOR_H
#define GAL_MONITOR_H 1

#include "../GALPrerequisites.h"
#include "../../../GreaperMath/Public/Rect.h"
#include "VideoMode.h"
#include "../../../GreaperCore/Public/Enumeration.h"

ENUMERATION(Win32DPIScaling, UNAWARE, SYSTEM_AWARE, MONITOR_AWARE, MONITOR_AWARE_V2, UNAWARE_GDISCALING);

namespace greaper::gal
{
	struct MonitorConfig
	{
		math::RectI SizeRect;
		math::RectI WorkRect;
		int32 Index;
		String Name;
		Vector<PVideoMode> VideoModes;
		sizet MainVideoMode;
		float DiagonalDPI;
		float HorizontalDPI;
		float VerticalDPI;
	};

	class Monitor
	{
		math::RectI m_SizeRect;
		math::RectI m_WorkRect;
		int32 m_Index;
		String m_Name;
		Vector<PVideoMode> m_VideoModes;
		sizet m_MainVideoMode;
		float m_DiagonalDPI;
		float m_HorizontalDPI;
		float m_VerticalDPI;

	public:
		Monitor()noexcept = default;
		Monitor(const Monitor&) = default;
		Monitor(Monitor&&)noexcept = default;
		Monitor& operator=(const Monitor&) = default;
		Monitor& operator=(Monitor&&)noexcept = default;

		void SetConfig(const MonitorConfig& config)noexcept;

		INLINE const math::RectI& GetSizeRect()const noexcept { return m_SizeRect; }

		INLINE const math::RectI& GetWorkRect()const noexcept { return m_WorkRect; }

		INLINE const String& GetName()const noexcept { return m_Name; }

		INLINE int32 GetIndex()const noexcept { return m_Index; }

		INLINE bool IsPrimary()const noexcept { return m_Index == 0; }

		INLINE float GetDiagonalDPI()const noexcept { return m_DiagonalDPI; }

		INLINE float GetHorizontalDPI()const noexcept { return m_HorizontalDPI; }

		INLINE float GetVerticalDPI()const noexcept { return m_VerticalDPI; }

		INLINE const Vector<PVideoMode>& GetVideoModes()const noexcept { return m_VideoModes; }

		INLINE PVideoMode GetMainVideoMode()const noexcept { if(m_VideoModes.size() > m_MainVideoMode) return m_VideoModes[m_MainVideoMode]; return SPtr<VideoMode>(); }
	};

	INLINE void Monitor::SetConfig(const MonitorConfig& config)noexcept
	{
		m_SizeRect = config.SizeRect;
		m_WorkRect = config.WorkRect;
		m_Index = config.Index;
		m_Name = config.Name;
		m_VideoModes = config.VideoModes;
		m_MainVideoMode = config.MainVideoMode;
		m_DiagonalDPI = config.DiagonalDPI;
		m_HorizontalDPI = config.HorizontalDPI;
		m_VerticalDPI = config.VerticalDPI;
	}
}

#endif /* GAL_MONITOR_H */