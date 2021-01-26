#include <Nexus/Game.h>
#include <Nexus/Window.h>
#include <Nexus/Event.h>

namespace Nexus {

	void Game::Run(Configuration& config) {
		Log::Init();
		Window::Create(config);

		OnStart();

		while (!Window::ShouldClose()) {
			SDL_Event event;

			while (SDL_PollEvent(&event)) {
				Event::Update(event);
				Window::Update();
				OnEvent();
			}

			OnUpdate();
			OnRender();
		}

		OnClose();
	}

}
