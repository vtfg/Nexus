#define SDL_MAIN_HANDLED

#include <Nexus.hpp>

namespace Nexus {
	Sprite* player = new Sprite;

	void Game::Init() {
		player->Init("Assets/dino.png", 24, 24);
	}

	void Game::HandleEvents(SDL_Event event) {
		if (event.type == SDL_KEYDOWN) {
		Vec2<int> currentPosition = player->GetPosition();

			switch (event.key.keysym.sym) {
			case SDLK_w:
			{
				std::cout << "W pressed" << std::endl;
				player->SetPosition(Nexus::Vec2<int>(currentPosition.x, currentPosition.y - player->velocity));
				break;
			}
			case SDLK_a:
			{
				std::cout << "A pressed" << std::endl;
				player->SetPosition(Nexus::Vec2<int>(currentPosition.x - player->velocity, currentPosition.y));
				break;
			}
			case SDLK_s:
			{
				std::cout << "S pressed" << std::endl;
				player->SetPosition(Nexus::Vec2<int>(currentPosition.x, currentPosition.y + player->velocity));
				break;
			}
			case SDLK_d:
			{
				std::cout << "D pressed" << std::endl;
				player->SetPosition(Nexus::Vec2<int>(currentPosition.x + player->velocity, currentPosition.y));
				break;
			}
			}
		}
	}

	void Game::Render() {
		player->Render();
	}

	void Game::Update() {
	}

	void Game::Clean() {
	}
}

int main(int argc, const char* argv[]) {
	Nexus::Engine* game = new Nexus::Engine();

	game->Init("Sandbox", 640, 480, false, true);

	game->Run();

	game->Clean();

	return 0;
}