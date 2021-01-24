#pragma once

#include <SDL.h>
#include <iostream>

namespace Nexus {

	struct Configuration {
		std::string Title;
		int Width;
		int Height;
		bool Vsync;
		SDL_Color ClearColor = { 0, 0, 0, 255 }; // Black

		Configuration(const std::string& title = "Nexus", int width = 1280,
			int height = 720, bool vsync = true, SDL_Color clearColor = { 0, 0, 0, 255 })
			: Title(title), Width(width), Height(height), Vsync(vsync), ClearColor(clearColor) {
		}
	};

}