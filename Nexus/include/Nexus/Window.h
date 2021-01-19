#pragma once

#include <SDL2/SDL.h>
#include <iostream>

namespace Nexus {

	struct WindowProps {
		std::string Title;
		int Width;
		int Height;
		bool Vsync;

		WindowProps(const std::string& title = "Nexus", int width = 1280,
			int height = 720, bool vsync = true)
			: Title(title), Width(width), Height(height), Vsync(vsync) {
		}
	};

	class Window {
	public:
		static SDL_Window& Get();
		static SDL_Renderer& GetRenderer();

		static void Create(WindowProps& props);

		static WindowProps props;

		static SDL_Window* window;
		static SDL_Renderer* renderer;

		static bool isOpen;

	private:
		Window();
	};

}
