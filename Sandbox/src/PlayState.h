#pragma once

#include <Nexus.h>

class PlayState : public Nexus::State {
public:
	void OnStart() {
		NEXUS_TRACE("PlayState started");

		rect = Nexus::Rect(200, 0);
		rect.x = 320 - rect.GetCenter().x;
		rect.y = 240 - rect.GetCenter().y;
	}

	void OnClose() {
		NEXUS_TRACE("PlayState closed");
	}

	void OnEvent() {
		if (Nexus::Keyboard::GetKeyDown(SDLK_ESCAPE)) {
			NEXUS_INFO("You pressed ESC");
		}
	}

	void OnUpdate() {
	}

	void OnRender() {
		renderer->Rect(&rect, Nexus::Color::BLACK);

		renderer->DrawColor(Nexus::Color::WHITE);
	}

private:
	Nexus::StateRenderer* renderer;
	Nexus::Rect rect;
};
