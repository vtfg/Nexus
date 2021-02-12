#include <Nexus/Game.h>
#include <Nexus/Window/Window.h>
#include <Nexus/Window/Event.h>

namespace Nexus {

	State* Game::currentState = nullptr;

	void Game::Run(Configuration& config, State* state) {
		PushState(state);

		Log::Init();
		Window::Create(config);

		currentState->OnStart();

		while (!Window::ShouldClose()) {
			SDL_Event event;

			while (SDL_PollEvent(&event)) {
				Event::Update(event);
				Window::Update();
				currentState->OnEvent();
			}

			currentState->OnUpdate();

			Renderer::Clear();
			currentState->OnRender();
			Renderer::Present();
		}

		currentState->OnClose();
	}

	void Game::PushState(State* state) {
		currentState = state;
	}

	void Game::ChangeState(State* newState) {
		currentState->OnClose();

		currentState = newState;

		currentState->OnStart();
	}

}
