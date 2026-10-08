#pragma once

struct Vec2 {

	float x = 0.0f;
	float y = 0.0f;

	Vec2() = default;
	Vec2(float newX, float newY);

	Vec2 operator+(const Vec2& other) const;
	Vec2 operator-(const Vec2& other) const;
	Vec2 operator*(float scalar) const;
	Vec2& operator+=(const Vec2& other);

	float length() const;
};