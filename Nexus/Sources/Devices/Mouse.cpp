#include "Mouse.hpp"

namespace Nexus {
	Vec2<int> Mouse::GetPosition() {
		static int x, y;
		SDL_GetMouseState(&x, &y);

		return Vec2<int>(x, y);
	}
}
