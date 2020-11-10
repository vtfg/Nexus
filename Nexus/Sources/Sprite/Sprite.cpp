#include "Sprite.hpp"

#include "Engine/Engine.hpp"

namespace Nexus {
	void Sprite::Init(const char* filename, int width, int height) {
		SDL_Surface* tempSurface = IMG_Load(filename);

		texture = SDL_CreateTextureFromSurface(Engine::renderer, tempSurface);

		SDL_FreeSurface(tempSurface);

		SDL_QueryTexture(texture, NULL, NULL, &sourceRect.w, &destinationRect.h);

		destinationRect.x = sourceRect.x = 0;
		destinationRect.y = sourceRect.y = 0;
		destinationRect.w = sourceRect.w = width * 2; // remove * 2 later
		destinationRect.h = sourceRect.h = height * 2;
	}

	void Sprite::Render() {
		SDL_RenderCopyEx(Engine::renderer, texture, &sourceRect, &destinationRect, 0, 0, SDL_FLIP_NONE);
	}

	Vec2<int> Sprite::GetPosition() {
		return Vec2<int>(destinationRect.x, destinationRect.y);
	}

	void Sprite::SetPosition(Vec2<int> newPosition) {
		destinationRect.x = newPosition.x;
		destinationRect.y = newPosition.y;
	}
}
