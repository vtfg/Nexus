#define SDL_MAIN_HANDLED
#include <Nexus.hpp>

Nexus::Game* game = nullptr;

int main(int argc, const char* argv[]) {
	game = new Nexus::Game();
	game->Init("Sandbox", 640, 480, false);

	while (game->Running()) {
		game->Update();
		game->Render();
	}

	game->Clean();

	return 0;
}