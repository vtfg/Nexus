#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Types/Vec2/Vec2.hpp"

namespace Nexus {
	class Sprite {
	public:
		void Init(const char* filename, int width, int height);
		void Render();

		Vec2<int> GetPosition();
		void SetPosition(Vec2<int> newPosition);

		int velocity = 24;
	private:
		SDL_Texture* texture = nullptr;
		SDL_Rect sourceRect, destinationRect;
	};
}