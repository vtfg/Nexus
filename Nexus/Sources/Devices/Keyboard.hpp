#pragma once

#include <SDL2/SDL.h>

namespace Nexus {
	class Keyboard {
	public:
		static SDL_KeyCode GetKeyDown(SDL_Event &event);

		static SDL_KeyCode GetKeyUp(SDL_Event &event);
	};
}