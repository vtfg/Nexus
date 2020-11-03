#pragma once

#include <SDL2/SDL.h>

namespace Nexus {
	class Game {
	public:
		Game();
		~Game();

		void Init(const char* title, int width, int height, bool fullscreen);

		void Update();
		bool Running();
		void Render();
		void Clean();

		static SDL_Renderer* renderer;

	private:
		bool isRunning = false;
		SDL_Window* window;
	};
}