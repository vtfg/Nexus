cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(Nexus)

set(CMAKE_CXX_STANDARD 17)
option(NEXUS_ONLY "Build only the framework" ON)

include("vendor/CPM/CPM.cmake")

find_package(SDL2 CONFIG REQUIRED)

if (NOT SDL2_FOUND)
	CPMAddPackage(
		NAME SDL2
		VERSION 2.0.14
		URL https://libsdl.org/release/SDL2-2.0.14.zip
	)

	if (SDL2_ADDED)
		add_library(SDL2::SDL2 ALIAS SDL2)
	endif()
endif()

add_subdirectory(Nexus/vendor/spdlog)

add_subdirectory(Nexus)

if (NOT NEXUS_ONLY)
	add_subdirectory(Sandbox)
endif()
