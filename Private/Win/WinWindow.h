/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#ifndef GAL_WIN_WINDOW_IMPL_H
#define GAL_WIN_WINDOW_IMPL_H 1

#include "../ImplPrerequisites.h"
#include "../../Public/Win/WinWindow.h"

namespace greaper::gal
{
	class WinWindowImpl final : public WinWindow
	{
		void AddWinMessages()noexcept;

		LRESULT WM_CLOSE_MSG(UNUSED WPARAM wParam, UNUSED LPARAM lParam);
		LRESULT WM_DESTROY_MSG(WPARAM wParam, LPARAM lParam);
		LRESULT WM_SHOWWINDOW_MSG(WPARAM wParam, LPARAM lParam);
		LRESULT WM_SIZE_MSG(WPARAM wParam, LPARAM lParam);
		LRESULT WM_ENABLE_MSG(WPARAM wParam, LPARAM lParam);
		LRESULT WM_MOVE_MSG(WPARAM wParam, LPARAM lParam);
		LRESULT WM_ACTIVATEAPP_MSG(WPARAM wParam, LPARAM lParam);

		TResult<String> _GetWindowTitle() const override;
		EmptyResult _ChangeWindowPositionAnchor(AnchoredPosition_t anchor) override;
		EmptyResult _ChangeWindowPosition(math::Vector2i newPosition) override;
		EmptyResult _ChangeWindowSize(math::Vector2i newSize) override;
		EmptyResult _ChangeWindowTitle(StringView newTitle) override;
		EmptyResult _ChangeWindowMode(WindowMode_t newMode) override;
		EmptyResult _ChangeWindowState(WindowState_t newState) override;
		EmptyResult _ShowWindow() override;
		EmptyResult _HideWindow() override;
		EmptyResult _RequestFocus() override;
		EmptyResult _EnableResizing(bool enable) override;
		EmptyResult _ChangeResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent) override;
		EmptyResult _ChangeMaxWindowSize(math::Vector2i maxSize, bool changeCurrent) override;
		EmptyResult _ChangeMinWindowSize(math::Vector2i minSize, bool changeCurrent) override;
		EmptyResult _ChangeMonitor(PMonitor monitor) override;
		TResult<bool> _HasClipboardText() const override;
		TResult<String> _GetClipboardText() const override;
		EmptyResult _SetClipboardText(StringView text) const override;
		EmptyResult _PollEvents() const override;
		EmptyResult _WaitForEvents() const override;
		EmptyResult _SwapWindow() const override;
		EmptyResult _CloseWindow() override;
		RenderBackend_t GetRenderBackend() const override;

	public:
		EmptyResult Create(const WindowDesc& windowDesc)noexcept override;
		

		LRESULT OnWindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	};
}

#endif /* GAL_WIN_WINDOW_IMPL_H */