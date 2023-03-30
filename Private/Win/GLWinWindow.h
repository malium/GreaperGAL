/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#ifndef GAL_GL_WIN_WINDOW_IMPL_H
#define GAL_GL_WIN_WINDOW_IMPL_H 1

#include "../ImplPrerequisites.h"
#include "../../Public/Win/GLWinWindow.h"

namespace greaper::gal
{
	class GLWinWindowImpl final : public GLWinWindow
	{
	public:
		EmptyResult Create(const WindowDesc& windowDesc)noexcept override;

		// Inherited via GLWinWindow
		virtual EmptyResult ChangeWindowSize(math::Vector2i size) override;
		virtual EmptyResult ChangeWindowPosition(math::Vector2i size) override;
		virtual EmptyResult ChangeWindowPosition(AnchoredPosition_t anchor) override;
		virtual void SetWindowTitle(StringView title) override;
		virtual EmptyResult ChangeWindowMode(WindowMode_t mode) override;
		virtual EmptyResult ChangeWindowState(WindowState_t state) override;
		virtual void ShowWindow() override;
		virtual void HideWindow() override;
		virtual void RequestFocus() override;
		virtual void EnableResizing(bool enable) override;
		virtual void SetResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent) override;
		virtual void SetMaxWindowSize(math::Vector2i maxSize, bool changeCurrent) override;
		virtual void SetMinWindowSize(math::Vector2i minSize, bool changeCurrent) override;
		virtual String GetClipboardText() const override;
		virtual EmptyResult SetClipboardText(StringView text) override;
		virtual bool HasClipboardText() override;
		virtual void SwapWindow() override;
		virtual void CloseWindow() override;
		virtual RenderBackend_t GetRenderBackend() const override;
	};
}

#endif /* GAL_GL_WIN_WINDOW_IMPL_H */