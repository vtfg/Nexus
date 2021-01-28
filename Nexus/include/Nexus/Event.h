#pragma once

#include <SDL.h>

namespace Nexus {

	class Event {
	public:
		static void Update(SDL_Event& newEvent);

		static SDL_Event& Get();

	private:
		Event() {};

		static SDL_Event event;
	};

}
