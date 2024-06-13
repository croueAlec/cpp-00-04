#include "Fixed.hpp"
#include "Point.hpp"
#include <ostream>
#include <math.h>


// i(j − k) + j(k − i) + k(i − j)
Fixed	area(const Point i, const Point j, const Point k)
{
	const float	x_one = roundf((i.getX().toFloat() * (j.getY().toFloat() - k.getY().toFloat())) * 10);
	const float	x_two = roundf((j.getX().toFloat() * (k.getY().toFloat() - i.getY().toFloat())) * 10);
	const float	x_three = roundf((k.getX().toFloat() * (i.getY().toFloat() - j.getY().toFloat())) * 10);

	const float	area = roundf((x_one + x_two + x_three) / 2);
	return ((area > 0) ? area : area * -1);
}

bool	checkSides(Point const e, Point const f, Point const g)
{
	const float	ex = roundf(e.getX().toFloat() * 100);
	const float	ey = roundf(e.getY().toFloat() * 100);
	const float	fx = roundf(f.getX().toFloat() * 100);
	const float	fy = roundf(f.getY().toFloat() * 100);
	const float	gx = roundf(g.getX().toFloat() * 100);
	const float	gy = roundf(g.getY().toFloat() * 100);

	// if (ey == fy)
	// 	std::cout << ey << " eq " << fy << std::endl;
	// if (ey == gy)
	// 	std::cout << ey << " eq " << gy << std::endl;
	// if (fy == gy)
	// 	std::cout << fy << " eq " << gy << std::endl;

	// std::cout << ex << " " << fx << " " << gx << std::endl;
	// std::cout << ey << " " << fy << " " << gy << std::endl << std::endl;

	if (ex == gx && fx == gx)
		return true;
	else if (ey == gy && fy == gy)
		return true;
	else
		return false;
}

bool	checkPoints(Point const z, Point const w)
{
	const float	zx = z.getX().toFloat();
	const float	zy = z.getY().toFloat();
	const float	wx = w.getX().toFloat();
	const float	wy = w.getY().toFloat();
	if (zx == wx)
	{
		if (zy == wy)
			return true;
	}
	return false;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (checkSides(a, b, point) || checkSides(a, c, point) || checkSides(b, c, point))
	{
		std::cout << "Point is on the edge of the triangle" << std::endl;
		return false;
	}
	if (checkPoints(a, point) || checkPoints(b, point) || checkPoints(c, point))
	{
		std::cout << "Point is on the apex of the triangle" << std::endl;
		return false;
	}
	std::cout << area(a, b, c) << std::endl;
	std::cout << area(a, b, point) << std::endl;
	std::cout << area(a, c, point) << std::endl;
	std::cout << area(b, c, point) << std::endl;
	if (area(a, b, c) != area(a, b, point) + area(b, c, point) + area(a, c, point))
	{
		return (0);
	}
	return (1);
}
