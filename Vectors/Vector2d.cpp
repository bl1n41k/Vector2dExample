#include "Vector2d.h"
#include <iostream>

Vector2d::Vector2d(double x, double y) {
	this->x = x;
	this->y = y;
}
Vector2d::Vector2d(double x1, double y1, double x2, double y2) {
	this->x = x2 - x1;
	this->y = y2 - y1;
}
Vector2d::Vector2d(const Vector2d& Vector) {
	this->x = Vector.x;
	this->y = Vector.y;
}

Vector2d::~Vector2d() {};

Vector2d Vector2d::sum(Vector2d b) {
	return Vector2d(x + b.x, y + b.y);
}

Vector2d Vector2d::sub(Vector2d b) {
	return Vector2d(x - b.x, y - b.y);
}

Vector2d Vector2d::mult(double num) {
	return Vector2d(x * num, y * num);
}

double Vector2d::scalarMult(Vector2d b) {
	return x * b.x + y * b.y;
}

void Vector2d::print()
{
	std::cout << "Vector(" << x << ";" << y << ")" <<std::endl;
}
