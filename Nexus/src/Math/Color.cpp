#include <Nexus/Math/Color.h>

namespace Nexus {

	Color::Color(uint8_t r, uint8_t g, uint8_t b)
		: R(r), G(g), B(b), A(255) {
	}

	Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
		: R(r), G(g), B(b), A(a) {
	}

	const Color Color::WHITE = Color(255, 255, 255, 255);
	const Color Color::BLACK = Color(0, 0, 0, 255);
	const Color Color::RED = Color(255, 0, 0);
	const Color Color::BLUE = Color(0, 255, 0);
	const Color Color::GREEN = Color(0, 0, 255);
	const Color Color::YELLOW = Color(255, 255, 0);
	const Color Color::ORANGE = Color(255, 127, 0);
	const Color Color::VIOLET = Color(127, 0, 255);

}
