#pragma once

namespace Nexus {

	template <typename T>
	struct Vec2 {
		T x;
		T y;

		Vec2() : x(0), y(0) {}
		Vec2<T>(T v_xy) : x(v_xy), y(v_xy) {}
		Vec2<T>(T vx, T vy) : x(vx), y(vy) {}

		bool operator == (Vec2<T>& vec);
		bool operator != (Vec2<T>& vec);

		Vec2<T> operator + (const Vec2& vec);
		Vec2<T> operator - (const Vec2& vec);
		Vec2<T> operator * (const Vec2& vec);
		Vec2<T> operator / (const Vec2& vec);

		Vec2<T> operator + (const T value);
		Vec2<T> operator - (const T value);
		Vec2<T> operator * (const T value);
		Vec2<T> operator / (const T value);
	};

}
