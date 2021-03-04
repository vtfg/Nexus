#pragma once

#include <Nexus/Window/Event.h>

namespace Nexus {

	class Keyboard {
	public:
		static bool GetKeyDown(SDL_Keycode key);

		static bool GetKeyUp(SDL_Keycode key);

	private:
		Keyboard() {};
	};

}
