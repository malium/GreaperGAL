/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "GLWinWindow.h"

using namespace greaper;
using namespace greaper::gal;

EmptyResult GLWinWindowImpl::Create(const WindowDesc& windowDesc) noexcept
{
	// We are on window thread here
	GLWinWindowDesc desc = (const GLWinWindowDesc&)windowDesc;
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::ChangeWindowSize(math::Vector2i size)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::ChangeWindowPosition(math::Vector2i size)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::ChangeWindowPosition(AnchoredPosition_t anchor)
{
	return Result::CreateFailure("Not implemented"sv);
}

void greaper::gal::GLWinWindowImpl::SetWindowTitle(StringView title)
{
	Break("Not implemented.");
}

EmptyResult greaper::gal::GLWinWindowImpl::ChangeWindowMode(WindowMode_t mode)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::ChangeWindowState(WindowState_t state)
{
	return Result::CreateFailure("Not implemented"sv);
}

void greaper::gal::GLWinWindowImpl::ShowWindow()
{
	Break("Not implemented.");
}

void greaper::gal::GLWinWindowImpl::HideWindow()
{
	Break("Not implemented.");
}

void greaper::gal::GLWinWindowImpl::RequestFocus()
{
	Break("Not implemented.");
}

void greaper::gal::GLWinWindowImpl::EnableResizing(bool enable)
{
	Break("Not implemented.");
}

void greaper::gal::GLWinWindowImpl::SetResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent)
{
	Break("Not implemented.");
}

void greaper::gal::GLWinWindowImpl::SetMaxWindowSize(math::Vector2i maxSize, bool changeCurrent)
{
	Break("Not implemented.");
}

void greaper::gal::GLWinWindowImpl::SetMinWindowSize(math::Vector2i minSize, bool changeCurrent)
{
	Break("Not implemented.");
}

String greaper::gal::GLWinWindowImpl::GetClipboardText() const
{
	Break("Not implemented.");
	return String();
}

EmptyResult greaper::gal::GLWinWindowImpl::SetClipboardText(StringView text)
{
	return Result::CreateFailure("Not implemented"sv);
}

bool greaper::gal::GLWinWindowImpl::HasClipboardText()
{
	Break("Not implemented.");
	return false;
}

void greaper::gal::GLWinWindowImpl::PollEvents()
{
	Break("Not implemented.");
}

void greaper::gal::GLWinWindowImpl::SwapWindow()
{
	Break("Not implemented.");
}

void greaper::gal::GLWinWindowImpl::CloseWindow()
{
	Break("Not implemented.");
}

RenderBackend_t greaper::gal::GLWinWindowImpl::GetRenderBackend() const
{
	return RenderBackend_t::OpenGL;
}
