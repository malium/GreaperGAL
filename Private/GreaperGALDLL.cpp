/***********************************************************************************
*   Copyright 2022 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

#include "GreaperGALDLL.h"
#include "WindowManager.h"
#include "../../GreaperCore/Public/Platform.h"
#include "../../GreaperCore/Public/Property.h"

#ifdef GREAPER_GAL_DLL

greaper::SPtr<greaper::gal::GreaperGALLibrary> gGALLibrary{};
extern greaper::SPtr<greaper::gal::WindowManager> gWindowManager;

#if PLT_WINDOWS
#define DLL_PROCESS_ATTACH   1
#define DLL_THREAD_ATTACH    2
#define DLL_THREAD_DETACH    3
#define DLL_PROCESS_DETACH   0

int __stdcall DllMain(UNUSED HINSTANCE hModule,
	unsigned long  ul_reason_for_call,
	UNUSED void* lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return 1;
}
#endif
BEGIN_C
DLLEXPORT void* _Greaper();
END_C

void* _Greaper()
{
	if (gGALLibrary == nullptr)
	{
		gGALLibrary.reset(greaper::Construct<greaper::gal::GreaperGALLibrary>());
		greaper::OSPlatform::PerLibraryInit();
	}
	return &gGALLibrary;
}

/*static void GLFWErrorReporter(int32 errorCode, const char* errorMessage)
{
	gGALLibrary->LogError(greaper::Format("GLFW error, code:%" PRIi32 " msg: %s.", errorCode, errorMessage));
}*/

void greaper::gal::GreaperGALLibrary::Initialize() noexcept
{
	/*glfwSetErrorCallback(&GLFWErrorReporter);
	int major, minor, rev;
	glfwGetVersion(&major, &minor, &rev);
	Log(Format("Initializing GLFW %" PRIi32 ".%" PRIi32 ".%" PRIi32 "...", major, minor, rev));
	auto rtn = glfwInit();
	if (rtn != GLFW_TRUE)
	{
		const char* errorMsg;
		auto errorCode = glfwGetError(&errorMsg);
		Break("Couldn't initialize GLFW, error code:%" PRIi32 ", error msg: %s.", errorCode, errorMsg);
	}*/
}

void greaper::gal::GreaperGALLibrary::AddManagers()noexcept
{
	// add more managers
	gWindowManager.reset(Construct<WindowManager>());
	m_Managers.push_back((PInterface)gWindowManager);

}

void greaper::gal::GreaperGALLibrary::RemoveManagers()noexcept
{
	IGreaperLibrary::RemoveManagers();
	gWindowManager.reset();
}

void greaper::gal::GreaperGALLibrary::Deinitialize()noexcept
{
	/*Log("Shutting down GLFW...");
	glfwTerminate();*/
	gGALLibrary.reset();
}

#else

#endif // GREAPER_DISP_DLL