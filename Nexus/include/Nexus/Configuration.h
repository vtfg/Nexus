#pragma once

#include <SDL.h>
#include <iostream>

#include <Nexus/Math/Color.h>

namespace Nexus {

	struct Configuration {
		std::string Title;
		int Width;
		int Height;
		bool Vsync;
		Color ClearColor = Color::BLACK;

		Configuration(const std::string& title = "Nexus", int width = 1280,
			int height = 720, bool vsync = true, Color clearColor = Color::BLACK)
			: Title(title), Width(width), Height(height), Vsync(vsync), ClearColor(clearColor) {
		}
	};

}