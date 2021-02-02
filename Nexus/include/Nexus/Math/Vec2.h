#pragma once

namespace Nexus {

	struct Vec2 {
		float x;
		float y;

		Vec2();
		Vec2(float v_xy);
		Vec2(float vx, float vy);

		bool operator == (Vec2& vec);
		bool operator != (Vec2& vec);

		Vec2 operator + (const Vec2& vec);
		Vec2 operator - (const Vec2& vec);
		Vec2 operator * (const Vec2& vec);
		Vec2 operator / (const Vec2& vec);

		Vec2 operator + (const float value);
		Vec2 operator - (const float value);
		Vec2 operator * (const float value);
		Vec2 operator / (const float value);
	};

}
