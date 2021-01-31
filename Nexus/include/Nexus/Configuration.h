#pragma once

#include <SDL.h>
#include <iostream>

namespace Nexus {

	struct Configuration {
		std::string Title;
		int Width;
		int Height;
		bool Vsync;

		Configuration(const std::string& title = "Nexus", int width = 128, 
			int height = 720, bool vsync = true) {
			Title = title;
			Width = width;
			Height = height;
			Vsync = vsync;
		}
	};

}
