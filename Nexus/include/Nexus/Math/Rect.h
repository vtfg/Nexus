#pragma once

#include <SDL.h>

#include <Nexus/Math/Vec2.h>

namespace Nexus {

	struct Rect : SDL_Rect {
		Rect() {}
		Rect(int wh, int xy, bool fill = true);
		Rect(Vec2<int> wh, Vec2<int> xy, bool fill = true);
		Rect(int w, int h, int x, int y, bool fill = true);

		Vec2<int> GetCenter();

		int Left();
		int Right();
		int Top();
		int Bottom();

		bool fill = true;
	};

}
