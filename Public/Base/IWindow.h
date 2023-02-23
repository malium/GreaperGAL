/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_I_WINDOW_H
#define GAL_I_WINDOW_H 1

#include "../GALPrerequisites.h"
#include "../../../GreaperMath/Public/Rect.h"
#include "../../../GreaperCore/Public/Base/IThread.h"
#include "../../../GreaperCore/Public/Event.h"
#include "../../../GreaperCore/Public/MPMCTaskScheduler.h"

ENUMERATION(RenderBackend, OpenGL, Vulkan, Native);
ENUMERATION(WindowState, Normal, Minimized, Maximized);
ENUMERATION(AnchoredPosition, TopLeft, Top, TopRight, Left, Center, Right, BottomLeft, Bottom, BottomRight, NoAnchor);
ENUMERATION(WindowMode, Windowed, Borderless, FullScreen);

namespace greaper::gal
{
	struct FramebufferDesc
	{
		int32 RedBits = 8;
		int32 GreenBits = 8;
		int32 BlueBits = 8;
		int32 AlphaBits = 8;
		int32 DepthBits = 24;
		int32 StencilBits = 8;

		int32 MSAASamples = 0;
		bool SRGBCapable = false;
		bool DoubleBuffer = true;
	};
	struct WindowDesc
	{
		WStringView Title = L"Greaper Window"sv;
		math::Vector2i Size = math::Vector2i(1280, 720); // The size of the window taking into account the window decoration (unless borderless or fullscreen)
		AnchoredPosition_t Position = AnchoredPosition_t::Center; // Try to move the window to certain anchor position (some platforms don't care about the initial position set)
		RenderBackend_t Backend = RenderBackend_t::Native; // Native will create a default Window using the native OS interface, OpenGL and Vulkan needs special initialization during window creation
		WindowMode_t Mode = WindowMode_t::Windowed;
		WindowState_t State = WindowState_t::Normal;
		bool ResizingEnabled = true; // Allow to resize the window by the user
		bool StartVisible = true; // Window should start visible (active on Windows), meaning that if its not active, window is running but not visible on the user desktop
		bool StartFocused = true; // Window should start on top and with keyboard and mouse focus
		int32 MonitorIndex = 0; // On what monitor should the window appear, <=0 selects the primary monitor
		PTaskScheduler Scheduler = PTaskScheduler(); // Scheduler running on the thread which the window is running, if nullptr WindowManager will create one
		math::Vector2i ResizingAspectRatio = math::Vector2i(0, 0); // What ratio aspec ratio scaling is allowed, (<=0,<=0) will not lock scaling
		math::Vector2i MaxSize = math::Vector2i(0, 0); // What is the maximum window size, if a ResizingRatio is set, this value should be se according to it, (<=0,<=0) will ignore this
		math::Vector2i MinSize = math::Vector2i(0, 0); // What is the minimum window size, if a ResizingRatio is set, this value should be se according to it, (<=0,<=0) will ignore this
		PWindow ParentWindow = PWindow();
		FramebufferDesc Framebuffer = FramebufferDesc();

		constexpr WindowDesc()noexcept = default;
	};

	class IWindow
	{
	protected:
		mutable RWMutex m_Mutex;
		WString m_Title;
		math::Vector2i m_Size;
		math::Vector2i m_DrawingSize;
		math::Vector2i m_Position;
		math::Vector2i m_ResizingRatio;
		math::Vector2i m_MaxSize;
		math::Vector2i m_MinSize;
		WindowMode_t m_Mode = WindowMode_t::COUNT;
		WindowState_t m_State = WindowState_t::COUNT;
		PMonitor m_CurrentMonitor;
		bool m_ResizingEnabled = false;
		bool m_HasFocus = false;
		bool m_IsVisible = false;
		WWindowManager m_WindowManager;
		PTaskScheduler m_TaskScheduler;
		PWindow m_This;

	public:
		// These events are triggered only by the connected window
		using WindowClosingEvent = Event<const PWindow&>;
		using WindowMovedEvent_t = Event<const PWindow&, math::Vector2i, math::Vector2i>;
		using WindowResizedEvent_t = Event<const PWindow&, math::Vector2i, math::Vector2i>;
		using WindowModeChangedEvent_t = Event<const PWindow&, WindowMode_t, WindowMode_t>;
		using WindowStateChangedEvent_t = Event<const PWindow&, WindowState_t, WindowState_t>;

		IWindow()noexcept = default;
		virtual ~IWindow() = default;

		INLINE math::Vector2i GetWindowSize()const noexcept { SHAREDLOCK(m_Mutex); return m_Size; }
		virtual EmptyResult ChangeWindowSize(math::Vector2i size) = 0;
		INLINE math::Vector2i GetWindowDrawingSize()const noexcept { SHAREDLOCK(m_Mutex); return m_DrawingSize; }
		
		INLINE math::Vector2i GetWindowPosition()const noexcept { SHAREDLOCK(m_Mutex); return m_Position; }
		virtual EmptyResult ChangeWindowPosition(math::Vector2i size) = 0;
		virtual EmptyResult ChangeWindowPosition(AnchoredPosition_t anchor) = 0;

		INLINE const WString& GetWindowTitle()const noexcept { SHAREDLOCK(m_Mutex); return m_Title; }
		virtual void SetWindowTitle(WStringView title) = 0;

		INLINE WindowMode_t GetWindowMode()const noexcept { SHAREDLOCK(m_Mutex); return m_Mode; }
		virtual EmptyResult ChangeWindowMode(WindowMode_t mode) = 0;

		INLINE WindowState_t GetWindowState()const noexcept { SHAREDLOCK(m_Mutex); return m_State; }
		virtual EmptyResult ChangeWindowState(WindowState_t state) = 0;

		virtual void ShowWindow() = 0;
		virtual void HideWindow() = 0;
		INLINE bool IsWindowShown()const noexcept { SHAREDLOCK(m_Mutex); return m_IsVisible; }

		INLINE bool IsWindowFocused()const noexcept { SHAREDLOCK(m_Mutex); return m_HasFocus; }
		virtual void RequestFocus() = 0;

		INLINE bool IsResizingEnabled()const noexcept { SHAREDLOCK(m_Mutex); return m_ResizingEnabled; }
		virtual void EnableResizing(bool enable) = 0;

		virtual void SetResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent = false) = 0;
		INLINE math::Vector2i GetResizingAspectRatio()const noexcept { SHAREDLOCK(m_Mutex); return m_ResizingRatio; }
		INLINE bool IsResizingAspectRatioEnabled()const noexcept { auto ratio = GetResizingAspectRatio(); return ratio.X > 0 && ratio.Y > 0; }

		virtual void SetMaxWindowSize(math::Vector2i maxSize, bool changeCurrent = false) = 0;
		INLINE math::Vector2i GetMaxWindowSize()const noexcept { SHAREDLOCK(m_Mutex); return m_MaxSize; }
		INLINE bool IsMaxWindowSizeEnabled()const noexcept { auto maxSize = GetMaxWindowSize(); return maxSize.X > 0 && maxSize.Y > 0; }
		
		virtual void SetMinWindowSize(math::Vector2i minSize, bool changeCurrent = false) = 0;
		INLINE math::Vector2i GetMinWindowSize()const noexcept { SHAREDLOCK(m_Mutex); return m_MinSize; }
		INLINE bool IsMinWindowSizeEnabled()const noexcept { auto minSize = GetMinWindowSize(); return minSize.X > 0 && minSize.Y > 0; }

		INLINE PMonitor GetCurrentMonitor()const noexcept { SHAREDLOCK(m_Mutex); return m_CurrentMonitor; }

		virtual String GetClipboardText()const = 0;
		virtual EmptyResult SetClipboardText(StringView text) = 0;
		virtual bool HasClipboardText() = 0;

		virtual void SwapWindow() = 0;

		virtual RenderBackend_t GetRenderBackend()const = 0;

		INLINE WWindowManager GetWindowManager()const noexcept { return m_WindowManager; }

		INLINE PTaskScheduler GetTaskScheduler()const noexcept { return m_TaskScheduler; }
	};
}

#endif /* GAL_I_WINDOW_H */