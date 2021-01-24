#pragma once

#include <Nexus/Window.h>

namespace Nexus {

	class Renderer {
	public:
		static SDL_Renderer& Get();

		static void Create(Configuration& props);

	private:
		static SDL_Renderer* renderer;
	};

}
