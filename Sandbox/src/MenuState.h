#pragma once

#include <Nexus.h>

#include "PlayState.h"

class MenuState : public Nexus::State {
public:
	void OnStart() {
		NEXUS_TRACE("MenuState started");
	}

	void OnClose() {
		NEXUS_TRACE("MenuState closed");
	}

	void OnUpdate() {
		if (Nexus::Keyboard::GetKeyDown(SDLK_RETURN)) {
			NEXUS_INFO("Going to PlayState");
			Nexus::Game::ChangeState(new PlayState());
		}
	}
};
