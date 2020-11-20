#include "Keyboard.hpp"

namespace Nexus {
	SDL_KeyCode Keyboard::GetKeyDown(SDL_Event& event) {
		if (event.type == SDL_KEYDOWN) {
			return SDL_KeyCode(event.key.keysym.sym);
		}
	}

	SDL_KeyCode Keyboard::GetKeyUp(SDL_Event& event) {
		if (event.type == SDL_KEYUP) {
			return SDL_KeyCode(event.key.keysym.sym);
		}
	}
}
