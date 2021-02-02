#pragma once

#include <Nexus.h>

class PlayState : public Nexus::State {
public:
	void OnStart() {
		NEXUS_TRACE("PlayState started");

		rect.w = 200;
		rect.h = 200;
		rect.x = 320 - rect.w / 2;
		rect.y = 240 - rect.h / 2;
	}

	void OnClose() {
		NEXUS_TRACE("PlayState closed");
	}

	void OnUpdate() {
		if (Nexus::Keyboard::GetKeyDown(SDLK_ESCAPE)) {
			NEXUS_INFO("You pressed ESC");
		}
	}

	void OnRender() {
		renderer->rect(&rect, Nexus::Color::BLACK);

		renderer->drawColor(Nexus::Color::WHITE);
	}

private:
	Nexus::StateRenderer* renderer;
	SDL_Rect rect;
};
