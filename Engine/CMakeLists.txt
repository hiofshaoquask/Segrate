cmake_minimum_required(VERSION 3.10)
project(Engine)

set(CMAKE_CXX_STANDARD 17)
	
add_compile_definitions(SG_ENGINE)

file(GLOB ENGINE_SRC
	"src/*.h"
	"src/*.cpp"
)

add_library(Engine SHARED "${ENGINE_SRC}")

target_include_directories(Engine PUBLIC "vendor/spdlog/include")
target_include_directories(Engine PUBLIC "$ENV{VULKAN_SDK}/Include")