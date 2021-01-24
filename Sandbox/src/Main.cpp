#include <Nexus.h>

int main(int argc, char** argv) {
	Nexus::Configuration config = {
		"Sandbox", 640, 480, true,
	};

	Nexus::Log::Init();
	Nexus::Window::Create(config);

	return 0;
}
