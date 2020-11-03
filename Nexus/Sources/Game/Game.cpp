#include "Game/Game.hpp"

namespace Nexus {
	SDL_Renderer* Game::renderer = nullptr;

	Game::Game() {
	}

	Game::~Game() {
	}

	void Game::Init(const char* title, int width, int height, bool fullscreen) {
		int flags = fullscreen ? SDL_WINDOW_FULLSCREEN : 0;

		if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
			window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);

			renderer = SDL_CreateRenderer(window, -1, 0);

			if (renderer) {
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			}

			isRunning = true;
		}
	}

	void Game::Update() {
	}

	bool Game::Running() {
		return isRunning;
	}

	void Game::Render() {
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
	}

	void Game::Clean() {
		SDL_Quit();
		SDL_DestroyWindow(window);
		SDL_DestroyRenderer(renderer);
	}
}