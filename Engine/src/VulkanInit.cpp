#include "VulkanInit.h"

#include <stdexcept>

#include "Logger.h"

namespace Segrate {

	void SG_API loadVulkan() {
		LibraryHandle vulkan_library;
		#if defined(_WIN32) || defined(_WIN64)
			vulkan_library = LoadLibrary("vulkan-1.dll");
		#elif defined(__linux__)
			vulkan_library = dlopen("libvulkan.so.1", RTLD_NOW);
		#endif

		if (vulkan_library == nullptr) {
			Logger::init();
			Logger::getEngineLogger()->warn("Cannot load Vulkan library");
		}
	}

}