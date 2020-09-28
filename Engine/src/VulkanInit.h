#pragma once

#include "SegrateCore.h"

#if defined(_WIN32) || defined(_WIN64)
	#include <Windows.h>
	typedef HMODULE LibraryHandle;
#elif defined(__linux__)
	#include <dlfcn.h>
	typedef void* LibraryHandle;
#endif

namespace Segrate {
	void SG_API loadVulkan();
}