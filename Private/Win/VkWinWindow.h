/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#ifndef GAL_VK_WIN_WINDOW_IMPL_H
#define GAL_VK_WIN_WINDOW_IMPL_H 1

#include "../ImplPrerequisites.h"
#include "../../Public/Win/VkWinWindow.h"

namespace greaper::gal
{
	class VkWinWindowImpl final : public VkWinWindow
	{
	public:
		EmptyResult Create(const WindowDesc& windowDesc)noexcept override;

		RenderBackend_t GetRenderBackend() const override { return RenderBackend_t::Vulkan; }

		virtual TResult<String> _GetWindowTitle() const override;
		virtual EmptyResult _ChangeWindowPositionAnchor(AnchoredPosition_t anchor) override;
		virtual EmptyResult _ChangeWindowPosition(math::Vector2i newPosition) override;
		virtual EmptyResult _ChangeWindowSize(math::Vector2i newSize) override;
		virtual EmptyResult _ChangeWindowTitle(StringView newTitle) override;
		virtual EmptyResult _ChangeWindowMode(WindowMode_t newMode) override;
		virtual EmptyResult _ChangeWindowState(WindowState_t newState) override;
		virtual EmptyResult _ShowWindow() override;
		virtual EmptyResult _HideWindow() override;
		virtual EmptyResult _RequestFocus() override;
		virtual EmptyResult _EnableResizing(bool enable) override;
		virtual EmptyResult _ChangeResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent) override;
		virtual EmptyResult _ChangeMaxWindowSize(math::Vector2i maxSize, bool changeCurrent) override;
		virtual EmptyResult _ChangeMinWindowSize(math::Vector2i minSize, bool changeCurrent) override;
		virtual EmptyResult _ChangeMonitor(PMonitor monitor) override;
		virtual TResult<bool> _HasClipboardText() const override;
		virtual TResult<String> _GetClipboardText() const override;
		virtual EmptyResult _SetClipboardText(StringView text) const override;
		virtual EmptyResult _PollEvents() const override;
		virtual EmptyResult _WaitForEvents() const override;
		virtual EmptyResult _SwapWindow() const override;
		virtual EmptyResult _CloseWindow() override;
	};
}

#endif /* GAL_VK_WIN_WINDOW_IMPL_H */