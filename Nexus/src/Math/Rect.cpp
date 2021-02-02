#include <Nexus/Math/Rect.h>

namespace Nexus {

	Rect::Rect(int wh, int xy, bool fill) {
		w = h = wh;
		x = y = xy;
		this->fill = fill;
	}

	Rect::Rect(Vec2 wh, Vec2 xy, bool fill) {
		w = wh.x;
		h = wh.y;
		x = xy.x;
		y = xy.y;
		this->fill = fill;
	}

	Rect::Rect(int w, int h, int x, int y, bool fill) {
		this->w = w;
		this->h = h;
		this->x = x;
		this->y = y;
		this->fill = fill;
	}

	Vec2 Rect::GetCenter() {
		return Vec2(w / 2, h / 2);
	}

	int Rect::Left() {
		return x;
	}

	int Rect::Right() {
		return x + w;
	}

	int Rect::Top() {
		return y;
	}

	int Rect::Bottom() {
		return y + h;
	}


	FRect::FRect(float wh, float xy, bool fill) {
		w = h = wh;
		x = y = xy;
		this->fill = fill;
	}

	FRect::FRect(Vec2 wh, Vec2 xy, bool fill) {
		w = wh.x;
		h = wh.y;
		x = xy.x;
		y = xy.y;
		this->fill = fill;
	}

	FRect::FRect(float w, float h, float x, float y, bool fill) {
		this->w = w;
		this->h = h;
		this->x = x;
		this->y = y;
		this->fill = fill;
	}

	Vec2 FRect::GetCenter() {
		return Vec2(w / 2, y / 2);
	}

	float FRect::Left() {
		return x;
	}

	float FRect::Right() {
		return x + w;
	}

	float FRect::Top() {
		return y;
	}

	float FRect::Bottom() {
		return y + h;
	}

}
