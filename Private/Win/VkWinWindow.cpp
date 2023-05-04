/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "../ImplPrerequisites.h"
#include "VkWinWindow.h"

using namespace greaper;
using namespace greaper::gal;

EmptyResult VkWinWindowImpl::Create(const WindowDesc& windowDesc) noexcept
{
	// We are on window thread here
	VkWinWindowDesc desc = (const VkWinWindowDesc&)windowDesc;
	return Result::CreateFailure("Not implemented"sv);
}

TResult<String> greaper::gal::VkWinWindowImpl::_GetWindowTitle() const
{
	return Result::CreateFailure<String>("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeWindowPositionAnchor(AnchoredPosition_t anchor)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeWindowPosition(math::Vector2i newPosition)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeWindowSize(math::Vector2i newSize)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeWindowTitle(StringView newTitle)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeWindowMode(WindowMode_t newMode)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeWindowState(WindowState_t newState)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ShowWindow()
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_HideWindow()
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_RequestFocus()
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_EnableResizing(bool enable)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeMaxWindowSize(math::Vector2i maxSize, bool changeCurrent)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeMinWindowSize(math::Vector2i minSize, bool changeCurrent)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_ChangeMonitor(PMonitor monitor)
{
	return Result::CreateFailure("Not implemented"sv);
}

TResult<bool> greaper::gal::VkWinWindowImpl::_HasClipboardText() const
{
	return Result::CreateFailure<bool>("Not implemented"sv);
}

TResult<String> greaper::gal::VkWinWindowImpl::_GetClipboardText() const
{
	return Result::CreateFailure<String>("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_SetClipboardText(StringView text) const
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_PollEvents() const
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_WaitForEvents() const
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_SwapWindow() const
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::_CloseWindow()
{
	return Result::CreateFailure("Not implemented"sv);
}