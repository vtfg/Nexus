#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Maths/Vec2/Vec2.hpp"

namespace Nexus {
	class Sprite {
	public:
		Sprite();
		~Sprite();

		void Init(const char* filename, int width, int height, int angle);
		void Render();

		int GetAngle();
		void SetAngle(int angle);

		SDL_RendererFlip GetFlip();
		void SetFlip(SDL_RendererFlip flip);

		Vec2<int> GetPosition();
		void SetPosition(Vec2<int> newPosition);

	private:
		SDL_Texture* texture = nullptr;
		SDL_Rect sourceRect, destinationRect;
		SDL_RendererFlip _flip;
		int _angle;
	};
}