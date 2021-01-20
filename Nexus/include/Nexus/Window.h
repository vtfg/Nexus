#pragma once

#include <SDL.h>
#include <iostream>

#include <Nexus/Renderer.h>
#include <Nexus/Log.h>

namespace Nexus {

	struct WindowProps {
		std::string Title;
		int Width;
		int Height;
		bool Vsync;
		SDL_Color ClearColor;

		WindowProps(const std::string& title = "Nexus", int width = 1280,
			int height = 720, bool vsync = true, SDL_Color clearColor = { 0, 0, 0, 255 })
			: Title(title), Width(width), Height(height), Vsync(vsync), ClearColor(clearColor) {
		}
	};

	class Window {
	public:
		static SDL_Window& Get();

		WindowProps& GetProps();

		static void Create(WindowProps& props);

		static bool ShouldClose();

		static bool isOpen;

	private:
		Window();

		static SDL_Window* window;
		static WindowProps props;
	};

}
