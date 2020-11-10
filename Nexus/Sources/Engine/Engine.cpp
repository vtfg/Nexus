#include "Engine/Engine.hpp"
#include "Game/Game.hpp"

namespace Nexus {
	SDL_Renderer* Engine::renderer = nullptr;

	Engine::Engine() {
	}

	Engine::~Engine() {
	}

	void Engine::Init(const char* title, int width, int height, bool fullscreen, bool vsync) {
		int flags = fullscreen ? SDL_WINDOW_FULLSCREEN : 0;
		int vsyncFlag = vsync ? SDL_RENDERER_PRESENTVSYNC : 0;

		if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
			window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);

			if (window) {
				renderer = SDL_CreateRenderer(window, -1, vsyncFlag);

				if (renderer) {
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
				}
			}

			isRunning = true;
		}
	}

	void Engine::HandleEvents() {
		SDL_Event event;
		SDL_PollEvent(&event);

		switch (event.type) {
		case SDL_QUIT:
		{
			isRunning = false;
			break;
		}
		default:
		{
			Game::HandleEvents(event);
			break;
		}
		}
	}

	void Engine::Update() {
		Game::Update();
	}

	bool Engine::Running() {
		return isRunning;
	}

	void Engine::Render() {
		SDL_RenderClear(renderer);
		Game::Render();
		SDL_RenderPresent(renderer);
	}

	void Engine::Clean() {
		Game::Clean();
		SDL_Quit();
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
	}

	void Engine::Run() {
		Game::Init();

		while (Engine::Running()) {
			Engine::HandleEvents();
			Engine::Render();
			Engine::Update();
		}
	};
}