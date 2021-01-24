#pragma once

#include <SDL.h>
#include <iostream>

#include <Nexus/Configuration.h>
#include <Nexus/Renderer.h>
#include <Nexus/Log.h>

namespace Nexus {

	class Window {
	public:
		static SDL_Window& Get();

		Configuration& GetConfig();

		static void Create(Configuration& props);

		static bool ShouldClose();

		static bool isOpen;

	private:
		Window();

		static SDL_Window* window;
		static Configuration config;
	};

}
