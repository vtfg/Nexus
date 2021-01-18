#include <Nexus.h>

#include <SDL2/SDL.h>

int main(int argc, char** argv) {
	Nexus::Log::Init();

	NEXUS_TRACE("Hello World from Sandbox!");

	SDL_version version;
	SDL_VERSION(&version);

	NEXUS_INFO("I'm using the {}.{}.{} version of SDL2.", version.major, version.minor, version.patch);

	return 0;
}
