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

TResult<String> greaper::gal::GLWinWindowImpl::_GetWindowTitle() const
{
	return Result::CreateFailure<String>("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeWindowPositionAnchor(AnchoredPosition_t anchor)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeWindowPosition(math::Vector2i newPosition)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeWindowSize(math::Vector2i newSize)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeWindowTitle(StringView newTitle)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeWindowMode(WindowMode_t newMode)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeWindowState(WindowState_t newState)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ShowWindow()
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_HideWindow()
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_RequestFocus()
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_EnableResizing(bool enable)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeMaxWindowSize(math::Vector2i maxSize, bool changeCurrent)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeMinWindowSize(math::Vector2i minSize, bool changeCurrent)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_ChangeMonitor(PMonitor monitor)
{
	return Result::CreateFailure("Not implemented"sv);
}

TResult<bool> greaper::gal::GLWinWindowImpl::_HasClipboardText() const
{
	return Result::CreateFailure<bool>("Not implemented"sv);
}

TResult<String> greaper::gal::GLWinWindowImpl::_GetClipboardText() const
{
	return Result::CreateFailure<String>("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_SetClipboardText(StringView text) const
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_PollEvents() const
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_WaitForEvents() const
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_SwapWindow() const
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::GLWinWindowImpl::_CloseWindow()
{
	return Result::CreateFailure("Not implemented"sv);
}
