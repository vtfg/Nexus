#define NEXUS_MAIN
#include "MenuState.h"

int main(int argc, char** argv) {
	Nexus::Configuration config = {
		"Sandbox", 640, 480, true
	};

	Nexus::Game::PushState(new MenuState());
	Nexus::Game::Run(config);

	return 0;
}
