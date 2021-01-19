#include <Nexus.h>

int main(int argc, char** argv) {
	Nexus::WindowProps props = {
		"Sandbox", // Title
		640, // Width
		480, // Height
		true // Use vsync?
	};

	Nexus::Log::Init();
	Nexus::Window::Create(props);

	return 0;
}
