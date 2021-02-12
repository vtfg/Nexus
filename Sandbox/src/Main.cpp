#define NEXUS_MAIN
#include "MenuState.h"

int main(int argc, char** argv) {
	Nexus::Configuration config = {
		"Sandbox", 640, 480, true
	};

	Nexus::Game::Run(config, new MenuState);

	return 0;
}
