#pragma once

#include <Nexus.h>

class Sandbox : public Nexus::Game {
private:
	int teste = 0;

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
		// This code renders a square without fill on the middle of the screen

		SDL_Rect rect;
		rect.w = 200;
		rect.h = 200;
		rect.x = 320 - rect.w / 2;
		rect.y = 240 - rect.h / 2;

		Nexus::Renderer::SetDrawColor(Nexus::Color::WHITE);

		Nexus::Renderer::DrawRect(&rect);

		Nexus::Renderer::SetDrawColor(Nexus::Color::BLACK);
	}

};
