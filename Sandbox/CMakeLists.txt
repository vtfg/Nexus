add_executable(Sandbox
	src/Main.cpp
)

include_directories(${SDL2_INCLUDE_DIRS})

target_link_libraries(Sandbox 
	PRIVATE Nexus
	SDL2
	spdlog
)
