#pragma once

#include <iostream>
using namespace std;

namespace Nexus {
	template <typename T>
	class Vec2 {
	public:
		T x, y;

		Vec2() : x(0), y(0) {
		}
		Vec2(T _x) : x(_x), y(_x) {
		}
		Vec2(T _x, T _y) : x(_x), y(_y) {
		}

		void Print();

		bool operator == (Vec2& v);
		bool operator != (Vec2& v);

		Vec2<T> operator + (Vec2& v);
		Vec2<T> operator - (Vec2& v);
		Vec2<T> operator * (Vec2& v);
		Vec2<T> operator / (Vec2& v);

		Vec2<T> operator + (T t);
		Vec2<T> operator - (T t);
		Vec2<T> operator * (T t);
		Vec2<T> operator / (T t);

	};
}