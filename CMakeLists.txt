cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(Nexus)

set(CMAKE_CXX_STANDARD 17)

include("vendor/CPM/CPM.cmake")

CPMAddPackage(
	NAME SDL2
	VERSION 2.0.14
	URL https://libsdl.org/release/SDL2-2.0.14.zip
)

add_subdirectory(Nexus/vendor/spdlog)

if (SDL2_ADDED)
	add_library(SDL2::SDL2 ALIAS SDL2)
endif()

add_subdirectory(Nexus)
add_subdirectory(Sandbox)
