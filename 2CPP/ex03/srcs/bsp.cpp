#include "Fixed.hpp"
#include "Point.hpp"
#include <ostream>

// i(j − k) + j(k − i) + k(i − j)
Fixed	area(const Point i, const Point j, const Point k)
{
	Fixed x_one = i.getX().toFloat() * (j.getY().toFloat() - k.getY().toFloat());
	Fixed x_two = j.getX().toFloat() * (k.getY().toFloat() - i.getY().toFloat());
	Fixed x_three = k.getX().toFloat() * (i.getY().toFloat() - j.getY().toFloat());

	Fixed area = (x_one + x_two + x_three) / 2;
	return ((area > 0) ? area : area * -1);
}

bool	checkSides(Point const e, Point const f, Point const g)
{
	if (e.getX().toFloat() == f.getX().toFloat() == g.getX().toFloat())
		return true;
	else if (e.getY().toFloat() == f.getY().toFloat() == g.getY().toFloat())
		return true;
	else
		return false;
}

bool	checkPoints(Point const z, Point const w)
{
	if (z.getX().toFloat() == w.getX().toFloat())
	{
		if (z.getY().toFloat() == w.getY().toFloat())
			return true;
	}
	return false;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (checkSides(a, b, point) || checkSides(a, c, point) || checkSides(b, c, point))
		return false;
	if (checkPoints(a, point) || checkPoints(b, point) || checkPoints(c, point))
		return false;
	// std::cout << area(a, b, c) << std::endl;
	// std::cout << area(a, b, point) << std::endl;
	// std::cout << area(a, c, point) << std::endl;
	// std::cout << area(b, c, point) << std::endl;
	if (area(a, b, c) != area(a, b, point) + area(b, c, point) + area(a, c, point))
	{
		// std::cout << "Point is not inside triangle" << std::endl;
		return (0);
	}
	// std::cout << "Point is inside triangle" << std::endl;
	// (void)a;
	// (void)b;
	// (void)c;
	// (void)point;
	return (1);
}
