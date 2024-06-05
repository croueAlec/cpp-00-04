#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float &x, const float &y): x(x), y(y)
{
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
	*this = other;
}

const Point& Point::operator=(const Point& other)
{
	if (this != &other)
	{
		(const_cast<Fixed&>(this->x)) = other.x;
		(const_cast<Fixed&>(this->y)) = other.y;
	}
	return(*this);
}

Point::~Point()
{
}

const Fixed	Point::getX(void) const
{
	return (this->x);
}

const Fixed	Point::getY(void) const
{
	return (this->y);
}
