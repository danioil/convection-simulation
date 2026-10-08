#include "Vec2.h"
#include <cmath>
using namespace std;


Vec2::Vec2(float newX, float newY) : x(newX), y(newY){}

Vec2 Vec2::operator+(const Vec2& other) const {
	return Vec2(x + other.x, y + other.y);
}
Vec2 Vec2::operator-(const Vec2& other) const {
	return Vec2(x - other.x, y - other.y);
}
Vec2 Vec2::operator*(float scalar) const {
	return Vec2(x * scalar, y * scalar);
}
Vec2& Vec2::operator+=(const Vec2& other) {
	x += other.x;
	y += other.y;
	return *this;
}

float Vec2::length() const {
	return sqrt(x * x + y * y);
}