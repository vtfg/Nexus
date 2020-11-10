#pragma once

#include <SDL2/SDL.h>

namespace Nexus {
	class Engine {
	public:
		Engine();
		~Engine();

		void Init(const char* title, int width, int height, bool fullscreen, bool vsync);

		void HandleEvents();
		void Update();
		bool Running();
		void Render();
		void Clean();

		void Run();

		static SDL_Renderer* renderer;

	private:
		bool isRunning = false;
		SDL_Window* window;
	};
}