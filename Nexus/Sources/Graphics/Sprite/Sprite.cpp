#include "Sprite.hpp"

#include "Engine/Engine.hpp"

namespace Nexus {
	Sprite::Sprite() {
	}

	Sprite::~Sprite() {
		SDL_DestroyTexture(texture);
	}

	void Sprite::Init(const char* filename, int width, int height, int angle) {
		SDL_Surface* tempSurface = IMG_Load(filename);

		texture = SDL_CreateTextureFromSurface(Engine::renderer, tempSurface);

		SDL_FreeSurface(tempSurface);

		SDL_QueryTexture(texture, NULL, NULL, &sourceRect.w, &destinationRect.h);

		destinationRect.x = sourceRect.x = 0;
		destinationRect.y = sourceRect.y = 0;
		destinationRect.w = sourceRect.w = width * 2; // remove * 2 later
		destinationRect.h = sourceRect.h = height * 2;

		_angle = angle;
	}

	void Sprite::Render() {
		SDL_RenderCopyEx(Engine::renderer, texture, &sourceRect, &destinationRect, _angle, 0, _flip);
	}

	int Sprite::GetAngle() {
		return _angle;
	}

	void Sprite::SetAngle(int angle) {
		_angle = angle;
	}

	SDL_RendererFlip Sprite::GetFlip() {
		return _flip;
	}

	void Sprite::SetFlip(SDL_RendererFlip flip) {
		_flip = flip;
	}

	Vec2<int> Sprite::GetPosition() {
		return Vec2<int>(destinationRect.x, destinationRect.y);
	}

	void Sprite::SetPosition(Vec2<int> newPosition) {
		destinationRect.x = newPosition.x;
		destinationRect.y = newPosition.y;
	}
}
