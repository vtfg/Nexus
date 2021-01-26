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

	void OnEvent() {
		if (Nexus::Keyboard::GetKeyDown(SDLK_ESCAPE)) {
			NEXUS_INFO("You pressed ESC");
		}
	}

	void OnUpdate() {
	}

	void OnRender() {
	}

};
