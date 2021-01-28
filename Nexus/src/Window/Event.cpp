#include <Nexus/Window/Event.h>

namespace Nexus {

	SDL_Event Event::event;

	void Event::Update(SDL_Event& newEvent) {
		event = newEvent;
	}

	SDL_Event& Event::Get() {
		return event;
	}

}
