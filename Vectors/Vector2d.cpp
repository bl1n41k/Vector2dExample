#include "Vector2d.h"
#include <iostream>
#include <string>

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


Vector2d Vector2d::operator+(const Vector2d& Vector) const
{
	return Vector2d(x + Vector.x, y + Vector.y);
}
Vector2d Vector2d::operator-(const Vector2d& Vector) const
{
	return Vector2d(x - Vector.x, y - Vector.y);
}
double Vector2d::operator*(const Vector2d& Vector) const
{
	return (x * Vector.x + y * Vector.y);
}
Vector2d Vector2d::operator*(const double& Vector) const
{
	return Vector2d(x * Vector, y * Vector);
}
const Vector2d operator*(double k, const Vector2d& Vector) {
	return Vector2d(Vector.x * k, Vector.y * k);
}

Vector2d& Vector2d::operator++()
{
	x++;
	y++;
	return *this;
}
Vector2d Vector2d::operator++(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}
Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}
Vector2d Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}
const Vector2d& Vector2d::operator+=(const Vector2d& Vector)
{
	x += Vector.x;
	y += Vector.y;
	return *this;
}
const Vector2d& Vector2d::operator-=(const Vector2d& Vector)
{
	x -= Vector.x;
	y -= Vector.y;
	return *this;
}
const Vector2d& Vector2d::operator*=(const double& Vector)
{
	x *= Vector;
	y *= Vector;
	return *this;
}

Vector2d::operator std::string()
{
	std::string s = "( " + std::to_string(x) + " ; " + std::to_string(y) + " )";
	return s;
}

double Vector2d::length() const {
	return sqrt(this->x * this->x + this->y * this->y);
}
double Vector2d::angle(const Vector2d& v) const {
	return acos((*this) * v / (this->length() * v.length()));
}