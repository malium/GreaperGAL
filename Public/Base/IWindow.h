/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#pragma once

#ifndef GAL_I_WINDOW_H
#define GAL_I_WINDOW_H 1

#include "../GALPrerequisites.h"
#include "../../../GreaperCore/Public/Base/IThread.h"
#include "../../../GreaperCore/Public/Event.h"
#include "../../../GreaperMath/Public/Vector2.h"
#include "../../../GreaperCore/Public/SlimTaskScheduler.h"

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
	protected:
		RenderBackend_t Backend = RenderBackend_t::Native; // Native will create a default Window using the native OS interface, OpenGL and Vulkan needs special initialization during window creation
		
	public:
		StringView Title = "Greaper Window"sv;
		math::Vector2i Size = math::Vector2i(1280, 720); // The size of the window taking into account the window decoration (unless borderless or fullscreen)
		AnchoredPosition_t Position = AnchoredPosition_t::Center; // Try to move the window to certain anchor position (some platforms don't care about the initial position set)
		WindowMode_t Mode = WindowMode_t::Windowed;
		WindowState_t State = WindowState_t::Normal;
		bool ResizingEnabled = true; // Allow to resize the window by the user
		bool StartVisible = true; // Window should start visible (active on Windows), meaning that if its not active, window is running but not visible on the user desktop
		bool StartFocused = true; // Window should start on top and with keyboard and mouse focus
		PMonitor Monitor{}; // On what monitor should the window appear, null selects the primary one.
		PSlimScheduler Scheduler{}; // Scheduler running on the thread which the window is running, if nullptr WindowManager will create one
		math::Vector2f ResizingAspectRatio = math::Vector2f(0.f, 0.f); // What ratio aspec ratio scaling is allowed, example (16,9), (<=0,<=0) will not lock scaling
		math::Vector2i MaxSize = math::Vector2i(0, 0); // What is the maximum window size, if a ResizingRatio is set, this value should be se according to it, (<=0,<=0) will ignore this
		math::Vector2i MinSize = math::Vector2i(0, 0); // What is the minimum window size, if a ResizingRatio is set, this value should be se according to it, (<=0,<=0) will ignore this
		PWindow ParentWindow{};
		FramebufferDesc Framebuffer{};

		INLINE constexpr RenderBackend_t GetBackend()const noexcept { return Backend; }
		constexpr WindowDesc()noexcept = default;
	};

	class IWindow
	{
	public:
		// These events are triggered only by the connected window
		using WindowClosingEvent_t = Event<const PWindow&>;
		using WindowMovedEvent_t = Event<const PWindow&, math::Vector2i, math::Vector2i>;
		using WindowResizedEvent_t = Event<const PWindow&, math::Vector2i, math::Vector2i>;
		using WindowModeChangedEvent_t = Event<const PWindow&, WindowMode_t, WindowMode_t>;
		using WindowStateChangedEvent_t = Event<const PWindow&, WindowState_t, WindowState_t>;

	protected:
		math::Vector2i m_Size;
		math::Vector2i m_RenderSize;
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
		bool m_ShouldClose = false;
		WWindowManager m_WindowManager;
		PSlimScheduler m_TaskScheduler;
		ThreadID_t m_ThreadID;
		PWindow m_This;

		mutable WindowClosingEvent_t m_WindowClosingEvt;
		mutable WindowMovedEvent_t m_WindowMovedEvt;
		mutable WindowResizedEvent_t m_WindowResizedEvt;
		mutable WindowModeChangedEvent_t m_WindowModeChangedEvt;
		mutable WindowStateChangedEvent_t m_WindowStateChangedEvt;

		virtual EmptyResult Create(const WindowDesc& windowDesc)noexcept = 0;

		virtual TResult<String> _GetWindowTitle()const = 0;
		virtual EmptyResult _ChangeWindowPositionAnchor(AnchoredPosition_t anchor) = 0;
		virtual EmptyResult _ChangeWindowPosition(math::Vector2i newPosition) = 0;
		virtual EmptyResult _ChangeWindowSize(math::Vector2i newSize) = 0;
		virtual EmptyResult _ChangeWindowTitle(StringView newTitle) = 0;
		virtual EmptyResult _ChangeWindowMode(WindowMode_t newMode) = 0;
		virtual EmptyResult _ChangeWindowState(WindowState_t newState) = 0;
		virtual EmptyResult _ShowWindow() = 0;
		virtual EmptyResult _HideWindow() = 0;
		virtual EmptyResult _RequestFocus() = 0;
		virtual EmptyResult _EnableResizing(bool enable) = 0;
		virtual EmptyResult _ChangeResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent) = 0;
		virtual EmptyResult _ChangeMaxWindowSize(math::Vector2i maxSize, bool changeCurrent) = 0;
		virtual EmptyResult _ChangeMinWindowSize(math::Vector2i minSize, bool changeCurrent) = 0;
		virtual EmptyResult _ChangeMonitor(PMonitor monitor) = 0;
		virtual TResult<bool> _HasClipboardText()const = 0;
		virtual TResult<String> _GetClipboardText()const = 0;
		virtual EmptyResult _SetClipboardText(StringView text)const = 0;
		virtual EmptyResult _PollEvents()const = 0;
		virtual EmptyResult _WaitForEvents()const = 0;
		virtual EmptyResult _SwapWindow()const = 0;
		virtual EmptyResult _CloseWindow() = 0;

	public:
		IWindow()noexcept = default;
		virtual ~IWindow() = default;

#define WNDGETFN(fnName, outputType, wndField)\
		inline TResult<outputType> fnName()const noexcept{\
			if (CUR_THID() != m_ThreadID){\
				outputType output{};\
				auto res = m_TaskScheduler->AddTask([&output, this]() { output = wndField; });\
				if (res.HasFailed()) return Result::CopyFailure<outputType>(res);\
				m_TaskScheduler->WaitUntilTaskFinished(res.GetValue());\
				return Result::CreateSuccess(output);}\
			return Result::CreateSuccess(wndField);}\

#define WNDGETFNX(fnName, outputType)\
		inline TResult<outputType> fnName()const noexcept{\
			if (CUR_THID() != m_ThreadID){\
				TResult<outputType> output;\
				auto res = m_TaskScheduler->AddTask([&output, this]() { output = _##fnName(); });\
				if (res.HasFailed()) return Result::CopyFailure<outputType>(res);\
				m_TaskScheduler->WaitUntilTaskFinished(res.GetValue());\
				return output;}\
			return _##fnName();}

#define WNDSETFN(fnName, inputType, inputName)\
		inline EmptyResult fnName(inputType inputName)noexcept{\
			if (CUR_THID() != m_ThreadID){\
				auto res = m_TaskScheduler->AddTask([&inputName, this]() { _##fnName(inputName); });\
				if (res.HasFailed()) return Result::CopyFailure(res); \
				m_TaskScheduler->WaitUntilTaskFinished(res.GetValue());\
				return Result::CreateSuccess();}\
			return _##fnName(inputName);}

#define WNDSETFN2(fnName, inputType, inputName, inputType2, inputName2)\
		inline EmptyResult fnName(inputType inputName, inputType2 inputName2)noexcept{\
			if (CUR_THID() != m_ThreadID){\
				auto res = m_TaskScheduler->AddTask([&inputName, &inputName2, this]() { _##fnName(inputName, inputName2); });\
				if (res.HasFailed()) return Result::CopyFailure(res); \
				m_TaskScheduler->WaitUntilTaskFinished(res.GetValue());\
				return Result::CreateSuccess();}\
			return _##fnName(inputName, inputName2);}

#define WNDCALLFN(fnName)\
		inline EmptyResult fnName()noexcept{\
			if (CUR_THID() != m_ThreadID){\
				EmptyResult result;\
				auto res = m_TaskScheduler->AddTask([&result, this]() { result = _##fnName(); });\
				if (res.HasFailed()) return Result::CopyFailure(res);\
				m_TaskScheduler->WaitUntilTaskFinished(res.GetValue());\
				return result;}\
			return _##fnName();}


		WNDGETFN(GetWindowSize, math::Vector2i, m_Size);
		WNDSETFN(ChangeWindowSize, math::Vector2i, newSize);
		
		WNDGETFN(GetRenderSize, math::Vector2i, m_RenderSize);
		
		WNDGETFN(GetWindowPosition, math::Vector2i, m_Position);
		WNDSETFN(ChangeWindowPosition, math::Vector2i, newPosition);
		WNDSETFN(ChangeWindowPositionAnchor, AnchoredPosition_t, anchor);

		WNDGETFNX(GetWindowTitle, String);
		WNDSETFN(ChangeWindowTitle, StringView, title);

		WNDGETFN(GetWindowMode, WindowMode_t, m_Mode);
		WNDSETFN(ChangeWindowMode, WindowMode_t, newMode);

		WNDGETFN(GetWindowState, WindowState_t, m_State);
		WNDSETFN(ChangeWindowState, WindowState_t, newState);

		WNDCALLFN(ShowWindow);
		WNDCALLFN(HideWindow);
		WNDGETFN(IsWindowShown, bool, m_IsVisible);

		WNDGETFN(IsWindowFocused, bool, m_HasFocus);
		WNDCALLFN(RequestFocus);

		WNDGETFN(ResizingEnabled, bool, m_ResizingEnabled);
		WNDSETFN(EnableResizing, bool, enable);

		WNDSETFN2(ChangeResizingAspectRatio, math::Vector2i, aspectRatio, bool, changeCurrent);
		WNDGETFN(GetResizingAspectRatio, math::Vector2i, m_ResizingRatio);
		INLINE TResult<bool> IsResizingAspectRatioEnabled()const noexcept
		{
			auto ratioRes = GetResizingAspectRatio();
			if (ratioRes.HasFailed())
				return Result::CopyFailure<bool>(ratioRes);
			const auto& ratio = ratioRes.GetValue();
			return Result::CreateSuccess(ratio.X > 0 && ratio.Y > 0);
		}

		WNDSETFN2(ChangeMaxWindowSize, math::Vector2i, maxSize, bool, changecurrent);
		WNDGETFN(GetMaxWindowSize, math::Vector2i, m_MaxSize);
		INLINE TResult<bool> IsMaxWindowSizeEnabled()const noexcept
		{
			auto maxSizeRes = GetMaxWindowSize();
			if (maxSizeRes.HasFailed())
				return Result::CopyFailure<bool>(maxSizeRes);
			const auto& maxSize = maxSizeRes.GetValue();
			return Result::CreateSuccess(maxSize.X > 0 && maxSize.Y > 0);
		}
		
		WNDSETFN2(ChangeMinWindowSize, math::Vector2i, minSize, bool, changecurrent);
		WNDGETFN(GetMinWindowSize, math::Vector2i, m_MinSize);
		INLINE TResult<bool> IsMinWindowSizeEnabled()const noexcept
		{
			auto minSizeRes = GetMinWindowSize();
			if (minSizeRes.HasFailed())
				return Result::CopyFailure<bool>(minSizeRes);
			const auto& minSize = minSizeRes.GetValue();
			return Result::CreateSuccess(minSize.X > 0 && minSize.Y > 0);
		}

		WNDGETFN(GetCurrentMonitor, PMonitor, m_CurrentMonitor);

		WNDGETFNX(GetClipboardText, String);
		WNDSETFN(SetClipboardText, StringView, text);
		WNDGETFNX(HasClipboardText, bool);

		WNDCALLFN(PollEvents);
		WNDCALLFN(SwapWindow);

		WNDGETFN(ShouldClose, bool, m_ShouldClose);
		WNDCALLFN(CloseWindow);

		virtual RenderBackend_t GetRenderBackend()const = 0;

		INLINE WWindowManager GetWindowManager()const noexcept { return m_WindowManager; }

		INLINE PSlimScheduler GetTaskScheduler()const noexcept { return m_TaskScheduler; }

		INLINE WindowClosingEvent_t& GetClosingEvent()const noexcept { return m_WindowClosingEvt; }
		INLINE WindowMovedEvent_t& GetMovedEvent()const noexcept { return m_WindowMovedEvt; }
		INLINE WindowResizedEvent_t& GetResizedEvent()const noexcept { return m_WindowResizedEvt; }
		INLINE WindowModeChangedEvent_t& GetModeChangedEvent()const noexcept { return m_WindowModeChangedEvt; }
		INLINE WindowStateChangedEvent_t& GetStateChangedEvent()const noexcept { return m_WindowStateChangedEvt; }

#undef WNDGETFN
#undef WNDGETFNX
#undef WNDSETFN
#undef WNDSETFN2
#undef WNDCALLFN
	};
}

#endif /* GAL_I_WINDOW_H */