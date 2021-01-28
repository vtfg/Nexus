#pragma once

#include <Nexus/Event.h>

namespace Nexus {

	class Keyboard {
	public:
		static bool GetKeyDown(SDL_Keycode key);

	private:
		Keyboard() {};
	};

}
