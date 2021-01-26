#include "Sandbox.h"

int main(int argc, char** argv) {
	Sandbox* sandbox = new Sandbox();

	Nexus::Configuration config = {
		"Sandbox", 640, 480, true
	};

	sandbox->Run(config);

	return 0;
}
