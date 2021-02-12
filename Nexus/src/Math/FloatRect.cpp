#include <Nexus/Math/FloatRect.h>

namespace Nexus {

	FloatRect::FloatRect(float wh, float xy, bool fill) {
		w = h = wh;
		x = y = xy;
		this->fill = fill;
	}

	FloatRect::FloatRect(Vec2<float> wh, Vec2<float> xy, bool fill) {
		w = wh.x;
		h = wh.y;
		x = xy.x;
		y = xy.y;
		this->fill = fill;
	}

	FloatRect::FloatRect(float w, float h, float x, float y, bool fill) {
		this->w = w;
		this->h = h;
		this->x = x;
		this->y = y;
		this->fill = fill;
	}

	Vec2<float> FloatRect::GetCenter() {
		return Vec2<float>(w / 2, y / 2);
	}

	float FloatRect::Left() {
		return x;
	}

	float FloatRect::Right() {
		return x + w;
	}

	float FloatRect::Top() {
		return y;
	}

	float FloatRect::Bottom() {
		return y + h;
	}

}
