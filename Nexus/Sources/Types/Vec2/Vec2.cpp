#include "Types/Vec2/Vec2.hpp"

namespace Nexus {
	template<typename T>
	inline void Vec2<T>::Print() {
		cout << "{ " << x << ", " << y << " }" << endl;
	}

	template<typename T>
	inline bool Vec2<T>::operator==(Vec2& v) {
		return *(double*)&x == *(double*)&v.x;
	}

	template<typename T>
	inline bool Vec2<T>::operator!=(Vec2& v) {
		return !(*this == v);
	}

	template<typename T>
	inline Vec2<T> Vec2<T>::operator+(Vec2& v) {
		return Vec2<T>(x + v.x, y + v.y);
	}

	template<typename T>
	inline Vec2<T> Vec2<T>::operator-(Vec2& v) {
		return Vec2<T>(x - v.x, y - v.y);
	}

	template<typename T>
	inline Vec2<T> Vec2<T>::operator*(Vec2& v) {
		return Vec2<T>(x * v.x, y * v.y);
	}

	template<typename T>
	inline Vec2<T> Vec2<T>::operator/(Vec2& v) {
		return Vec2<T>(
			(v.x == 0) ? 0 : (x / v.x),
			(v.y == 0) ? 0 : (y / v.y));
	}

	template<typename T>
	inline Vec2<T> Vec2<T>::operator+(T t) {
		return *this + Vec2<T>(t);
	}

	template<typename T>
	inline Vec2<T> Vec2<T>::operator-(T t) {
		return *this - Vec2<T>(t);
	}

	template<typename T>
	inline Vec2<T> Vec2<T>::operator*(T t) {
		return *this * Vec2<T>(t);
	}

	template<typename T>
	inline Vec2<T> Vec2<T>::operator/(T t) {
		return *this / Vec2<T>(t);
	}
}