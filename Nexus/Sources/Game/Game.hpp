#pragma once

#include <SDL2/SDL.h>

namespace Nexus {
	class Game {
	public:
		static void Init();
		static void HandleEvents(SDL_Event event);
		static void Render();
		static void Update();
		static void Clean();
	};
}