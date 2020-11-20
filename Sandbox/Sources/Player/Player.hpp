#pragma once

#include "Nexus.hpp"

class Player : public Nexus::Sprite {
public:
	void MoveUp(); // W
	void MoveLeft(); // A
	void MoveDown(); // S
	void MoveRight(); // D

	int velocity;
};