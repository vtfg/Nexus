#pragma once
#include <Nexus.h>

class Sandbox : public Nexus::Game {
private:
	void OnStart() {
		NEXUS_TRACE("Started");
	}

	void OnClose() {
		NEXUS_TRACE("Closed");
	}

	void OnEvent(SDL_Event& event) {
		if (event.key.keysym.sym == SDLK_ESCAPE && event.key.type != SDL_KEYDOWN) {
			NEXUS_INFO("You pressed ESC");
		}
	}

	void OnUpdate() {
	}

	void OnRender() {
	}

};
