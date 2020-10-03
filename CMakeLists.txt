cmake_minimum_required(VERSION 3.10)
project(Segrate)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/modules")

add_subdirectory(Engine)
add_subdirectory(Sandbox)
