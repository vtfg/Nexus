#pragma once

#include <Nexus/Window/Window.h>
#include <Nexus/Math/Color.h>

namespace Nexus {

	class Renderer {
	public:
		static SDL_Renderer* Get();

		static void Create(Configuration& config);

		static void Clear();
		static void Present();
		
		static void SetDrawColor(Color color);

		static void DrawRect(SDL_Rect* rect);

	private:
		Renderer() {};

		static SDL_Renderer* renderer;
	};

}
