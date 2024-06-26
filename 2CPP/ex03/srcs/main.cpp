#include "Point.hpp"

int main()
{
	{
	/*edge*/
		Point a(0, 0);
		Point e(20, 0);
		Point f(10, 30);
		Point g(10, 0);

		if (bsp(a, e, f, g))
		 std::cout <<"Inside" << std::endl << std::endl;
		else
		 std::cout <<"Not Inside" << std::endl << std::endl;
	}
	{
	/*point of the triangle*/
		Point a(0, 0);
		Point b(20, 0);
		Point c(10, 30);
		Point to_check(10, 30);

		if (bsp(a, b, c, to_check))
		 std::cout <<"Inside" << std::endl << std::endl;
		else
		 std::cout <<"Not Inside" << std::endl << std::endl;
	}
	{
	/*edge with floats*/
		Point a(10.2, 15.6);
		Point b(20.55, 15.6);
		Point c(15.78, 42.42);
		Point to_check(13.8, 15.6);

		if (bsp(a, b, c, to_check))
		 std::cout <<"Inside" << std::endl << std::endl;
		else
		 std::cout <<"Not Inside" << std::endl << std::endl;
	}
	{
	/*point with floats*/
		Point a(10.2, 15.6);
		Point b(20.55, 15.6);
		Point c(15.78, 42.42);
		Point to_check(15.78, 42.42);

		if (bsp(a, b, c, to_check))
		 std::cout <<"Inside" << std::endl << std::endl;
		else
		 std::cout <<"Not Inside" << std::endl << std::endl;
	}
	{
	/*inside*/
		Point a(10.2, 15.6);
		Point b(20.55, 15.6);
		Point c(15.78, 42.42);
		Point to_check(15.78, 41.42);

		if (bsp(a, b, c, to_check))
		 std::cout <<"Inside" << std::endl << std::endl;
		else
		 std::cout <<"Not Inside" << std::endl << std::endl;
	}
	{
	/*inside*/
		Point a(10.2, 15.6);
		Point b(20.55, 15.6);
		Point c(15.78, 42.42);
		Point to_check(15.78, 39.42);

		if (bsp(a, b, c, to_check))
		 std::cout <<"Inside" << std::endl << std::endl;
		else
		 std::cout <<"Not Inside" << std::endl << std::endl;
	}
	{
	/*inside*/
		Point a(10.2, 15.6);
		Point b(20.55, 15.6);
		Point c(15.78, 42.42);
		Point to_check(12.28, 16.6);

		if (bsp(a, b, c, to_check))
		 std::cout <<"Inside" << std::endl << std::endl;
		else
		 std::cout <<"Not Inside" << std::endl << std::endl;
	}
	{
	/*inside*/
		Point a(0, 0);
		Point b(2, 4);
		Point c(3, 1);
		Point to_check(2, 2);

		if (bsp(a, b, c, to_check))
		 std::cout <<"Inside" << std::endl << std::endl;
		else
		 std::cout <<"Not Inside" << std::endl << std::endl;
	}
	return 0;
}
