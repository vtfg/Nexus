#include <Nexus/Window/Keyboard.h>

namespace Nexus {

	bool Keyboard::GetKeyDown(SDL_Keycode key) {
		if (Event::Get().key.type == SDL_KEYDOWN) {
			return Event::Get().key.keysym.sym == key;
		}

		return false;
	}

	bool Keyboard::GetKeyUp(SDL_Keycode key) {
		if (Event::Get().key.type == SDL_KEYUP) {
			return Event::Get().key.keysym.sym == key;
		}

		return false;
	}

}
