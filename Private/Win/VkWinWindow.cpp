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

EmptyResult greaper::gal::VkWinWindowImpl::ChangeWindowSize(math::Vector2i size)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::ChangeWindowPosition(math::Vector2i size)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::ChangeWindowPosition(AnchoredPosition_t anchor)
{
	return Result::CreateFailure("Not implemented"sv);
}

void greaper::gal::VkWinWindowImpl::SetWindowTitle(StringView title)
{
	Break("Not implemented.");
}

EmptyResult greaper::gal::VkWinWindowImpl::ChangeWindowMode(WindowMode_t mode)
{
	return Result::CreateFailure("Not implemented"sv);
}

EmptyResult greaper::gal::VkWinWindowImpl::ChangeWindowState(WindowState_t state)
{
	return Result::CreateFailure("Not implemented"sv);
}

void greaper::gal::VkWinWindowImpl::ShowWindow()
{
	Break("Not implemented.");
}

void greaper::gal::VkWinWindowImpl::HideWindow()
{
	Break("Not implemented.");
}

void greaper::gal::VkWinWindowImpl::RequestFocus()
{
	Break("Not implemented.");
}

void greaper::gal::VkWinWindowImpl::EnableResizing(bool enable)
{
	Break("Not implemented.");
}

void greaper::gal::VkWinWindowImpl::SetResizingAspectRatio(math::Vector2i aspectRatio, bool changeCurrent)
{
	Break("Not implemented.");
}

void greaper::gal::VkWinWindowImpl::SetMaxWindowSize(math::Vector2i maxSize, bool changeCurrent)
{
	Break("Not implemented.");
}

void greaper::gal::VkWinWindowImpl::SetMinWindowSize(math::Vector2i minSize, bool changeCurrent)
{
	Break("Not implemented.");
}

String greaper::gal::VkWinWindowImpl::GetClipboardText() const
{
	Break("Not implemented.");
	return String();
}

EmptyResult greaper::gal::VkWinWindowImpl::SetClipboardText(StringView text)
{
	return Result::CreateFailure("Not implemented"sv);
}

bool greaper::gal::VkWinWindowImpl::HasClipboardText()
{
	Break("Not implemented.");
	return false;
}

void greaper::gal::VkWinWindowImpl::SwapWindow()
{
	Break("Not implemented.");
}

void greaper::gal::VkWinWindowImpl::CloseWindow()
{
	Break("Not implemented.");
}

RenderBackend_t greaper::gal::VkWinWindowImpl::GetRenderBackend() const
{
	return RenderBackend_t::Vulkan;
}
