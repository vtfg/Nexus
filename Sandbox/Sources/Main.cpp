#define SDL_MAIN_HANDLED

#include <Nexus.hpp>
#include "Player/Player.hpp"

namespace Nexus {
	Player* player = new Player;

	void Game::Init() {
		player->Init("Assets/dino.png", 24, 24, 0);
		player->velocity = 24;
	}

	void Game::HandleEvents(SDL_Event event) {
		Vec2<int> currentPosition = player->GetPosition();

		switch (Keyboard::GetKeyDown(event)) {
		case SDLK_w:
		{
			player->MoveUp();
			break;
		}
		case SDLK_a:
		{
			player->MoveLeft();
			break;
		}
		case SDLK_s:
		{
			player->MoveDown();
			break;
		}
		case SDLK_d:
		{
			player->MoveRight();
			break;
		}
		}
	}

	void Game::Render() {
		player->Render();
	}

	void Game::Update() {
	}

	void Game::Clean() {
		delete player;
	}
}

int main(int argc, const char* argv[]) {
	Nexus::Engine* game = new Nexus::Engine();

	game->Init("Sandbox", 640, 480, false, true);

	game->Run();

	game->Clean();

	return 0;
}