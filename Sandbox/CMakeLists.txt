add_executable(Sandbox
	src/Main.cpp
)

target_link_libraries(Sandbox 
	PRIVATE Nexus
	SDL2
	spdlog
)
