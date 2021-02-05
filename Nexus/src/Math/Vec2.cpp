#include <Nexus/Math/Vec2.h>

namespace Nexus {

	template <typename T>
	bool Vec2<T>::operator == (Vec2& vec) {
		return x == vec.x && y == vec.y;
	}

	template <typename T>
	bool Vec2<T>::operator != (Vec2& vec) {
		return !operator==(vec);
	}

	template <typename T>
	Vec2<T> Vec2<T>::operator + (const Vec2& vec) {
		return Vec2(x + vec.x, y + vec.y);
	}

	template <typename T>
	Vec2<T> Vec2<T>::operator - (const Vec2& vec) {
		return Vec2(x - vec.x, y - vec.y);
	}

	template <typename T>
	Vec2<T> Vec2<T>::operator * (const Vec2& vec) {
		return Vec2(x * vec.x, y * vec.y);
	}

	template <typename T>
	Vec2<T> Vec2<T>::operator / (const Vec2& vec) {
		return Vec2(x / vec.x, y / vec.y);
	}

	template <typename T>
	Vec2<T> Vec2<T>::operator + (const T value) {
		return Vec2(x + value, y + value);
	}

	template <typename T>
	Vec2<T> Vec2<T>::operator - (const T value) {
		return Vec2(x - value, y - value);
	}

	template <typename T>
	Vec2<T> Vec2<T>::operator * (const T value) {
		return Vec2(x * value, y * value);
	}

	template <typename T>
	Vec2<T> Vec2<T>::operator / (const T value) {
		return Vec2(x / value, y / value);
	}

}
