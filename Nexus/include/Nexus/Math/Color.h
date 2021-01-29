#pragma once

#include <inttypes.h>

namespace Nexus {

	struct Color {
		uint8_t R;
		uint8_t G;
		uint8_t B;
		uint8_t A;

		Color(uint8_t r, uint8_t g, uint8_t b);
		Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

		static const Color WHITE;
		static const Color BLACK;
		static const Color RED;
		static const Color BLUE;
		static const Color GREEN;
		static const Color YELLOW;
		static const Color ORANGE;
		static const Color VIOLET;
	};

}

