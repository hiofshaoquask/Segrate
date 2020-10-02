cmake_minimum_required(VERSION 3.10)
project(Sandbox)

set(CMAKE_CXX_STANDARD 17)

add_compile_definitions(SG_CLIENT)

file(GLOB SANDBOX_SRC
	"src/*.cpp"
	"src/*.h"
)

add_executable(Sandbox "${SANDBOX_SRC}")

include_directories("${CMAKE_SOURCE_DIR}/Engine/src")
target_link_libraries(Sandbox Engine)

add_custom_command(TARGET Sandbox POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_BINARY_DIR}/Engine/debug/Engine.dll"
		"${CMAKE_BINARY_DIR}/Sandbox/debug/Engine.dll"
)
