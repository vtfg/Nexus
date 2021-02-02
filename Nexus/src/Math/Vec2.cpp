#include <Nexus/Math/Vec2.h>

namespace Nexus {

	Vec2::Vec2() : x(0), y(0) {
	}

	Vec2::Vec2(float v_xy) : x(v_xy), y(v_xy) {
	}

	Vec2::Vec2(float vx, float vy) : x(vx), y(vy) {
	}

	bool Vec2::operator == (Vec2& vec) {
		return x == vec.x && y == vec.y;
	}

	bool Vec2::operator != (Vec2& vec) {
		return !operator==(vec);
	}

	Vec2 Vec2::operator + (const Vec2& vec) {
		return Vec2(x + vec.x, y + vec.y);
	}

	Vec2 Vec2::operator - (const Vec2& vec) {
		return Vec2(x - vec.x, y - vec.y);
	}

	Vec2 Vec2::operator * (const Vec2& vec) {
		return Vec2(x * vec.x, y * vec.y);
	}

	Vec2 Vec2::operator / (const Vec2& vec) {
		return Vec2(x / vec.x, y / vec.y);
	}

	Vec2 Vec2::operator + (const float value) {
		return Vec2(x + value, y + value);
	}

	Vec2 Vec2::operator - (const float value) {
		return Vec2(x - value, y - value);
	}

	Vec2 Vec2::operator * (const float value) {
		return Vec2(x * value, y * value);
	}

	Vec2 Vec2::operator / (const float value) {
		return Vec2(x / value, y / value);
	}

}
