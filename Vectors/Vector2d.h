#pragma once
#include <string>
#include <cmath>
class Vector2d
{
private:

	double x, y;

public:

	Vector2d() { x = 0; y = 0; };
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d&);
	~Vector2d();

	void setx(double value) { x = value; }
	double getx() { return x; }
	void sety(double value) { y = value; }
	double gety() { return y; }
	Vector2d sum(Vector2d);
	Vector2d sub(Vector2d);
	Vector2d mult(double);
	double scalarMult(Vector2d);
	void print(void);

	Vector2d operator+(const Vector2d&) const;
	Vector2d operator-(const Vector2d&) const;
	double operator*(const Vector2d&) const;
	Vector2d operator*(const double&)const;
	friend const Vector2d operator*(double, const Vector2d&);

	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);

	const Vector2d& operator +=(const Vector2d&);
	const Vector2d& operator -=(const Vector2d&);
	const Vector2d& operator *=(const double&);

	double length() const;
	double angle(const Vector2d& v) const;

	operator std::string();
	
};
