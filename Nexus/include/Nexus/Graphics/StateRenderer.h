#pragma once

#include <SDL.h>

#include <Nexus/Math/Color.h>

namespace Nexus {

	class StateRenderer {
	public:
		StateRenderer() {}
		~StateRenderer() {}

		void rect(SDL_Rect* rect, Color color);

		void drawColor(Color color);
	};

}
