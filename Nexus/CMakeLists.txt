add_library(Nexus
	# Graphics
	src/Graphics/Renderer.cpp
	src/Graphics/StateRenderer.cpp

	# Math
	src/Math/Color.cpp
	src/Math/Vec2.cpp
	src/Math/Rect.cpp
	src/Math/FloatRect.cpp

	# Window
	src/Window/Event.cpp
	src/Window/Keyboard.cpp
	src/Window/Window.cpp

	# Etc
	src/Game.cpp
	src/Log.cpp
)

target_include_directories(Nexus 
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/src
)

include_directories(${SDL2_INCLUDE_DIRS})

target_link_libraries(Nexus
	SDL2
	spdlog
)
