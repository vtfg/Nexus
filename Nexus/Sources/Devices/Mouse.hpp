#pragma once

#include <SDL2/SDL.h>

#include "Maths/Vec2/Vec2.hpp"

namespace Nexus {
	class Mouse {
	public:
		static Vec2<int> GetPosition();
	};
}