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
		// This code renders a square without fill on the middle of the screen

		SDL_Rect rect;
		rect.w = 200;
		rect.h = 200;
		rect.x = 320 - rect.w / 2;
		rect.y = 240 - rect.h / 2;

		SDL_SetRenderDrawColor(Nexus::Renderer::Get(), 255, 255, 255, 255);

		SDL_RenderDrawRect(Nexus::Renderer::Get(), &rect);

		SDL_SetRenderDrawColor(Nexus::Renderer::Get(), 0, 0, 0, 255);
	}

};
