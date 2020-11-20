#include "Player.hpp"

void Player::MoveUp() {
	SetPosition(Nexus::Vec2<int>(
		GetPosition().x,
		GetPosition().y - velocity)
	);
}

void Player::MoveLeft() {
	SetPosition(Nexus::Vec2<int>(
		GetPosition().x - velocity,
		GetPosition().y)
	);

	SetFlip(SDL_FLIP_HORIZONTAL);
}

void Player::MoveDown() {
	SetPosition(Nexus::Vec2<int>(
		GetPosition().x,
		GetPosition().y + velocity)
	);
}

void Player::MoveRight() {
	SetPosition(Nexus::Vec2<int>(
		GetPosition().x + velocity,
		GetPosition().y)
	);

	SetFlip(SDL_FLIP_NONE);
}
