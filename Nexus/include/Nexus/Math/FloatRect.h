#pragma once

#include <SDL.h>

#include <Nexus/Math/Vec2.h>

namespace Nexus {

	struct FloatRect : SDL_FRect {
		FloatRect() {}
		FloatRect(float wh, float xy, bool fill = true);
		FloatRect(Vec2<float> wh, Vec2<float> xy, bool fill = true);
		FloatRect(float w, float h, float x, float y, bool fill = true);

		Vec2<float> GetCenter();

		float Left();
		float Right();
		float Top();
		float Bottom();

		bool fill = true;
	};

}
