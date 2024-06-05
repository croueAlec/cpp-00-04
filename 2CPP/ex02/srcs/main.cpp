#include "Fixed.hpp"
#include <iostream>
#include <iterator>
#include <ostream>

void	printIncr(void)
{
	Fixed incr;

	std::cout << incr << std::endl;
	std::cout << ++incr << std::endl;
	std::cout << incr << std::endl;
	std::cout << incr++ << std::endl;
	std::cout << incr << std::endl;
	std::cout << std::endl;
}

void	printDecr(void)
{
	Fixed decr;

	std::cout << decr << std::endl;
	std::cout << --decr << std::endl;
	std::cout << decr << std::endl;
	std::cout << decr-- << std::endl;
	std::cout << decr << std::endl;
	std::cout << std::endl;
}

void	printCompares(void)
{
	Fixed a(20);
	Fixed b(17.17f);
	Fixed c(20.0f);
	bool	comp = a < b;
	std::cout << "A is not smaller than B " << comp << std::endl;
	comp = a > b;
	std::cout << "A is bigger than B " << comp << std::endl;
	comp = a >= c;
	std::cout << "A is bigger or equals to C " << comp << std::endl;
	comp = b <= c;
	std::cout << "B is smaller or equals to C " << comp << std::endl;
	comp = a == c;
	std::cout << "A equals C " << comp << std::endl;
	comp = c != b;
	std::cout << "C is not equals to B " << comp << std::endl;
	std::cout << std::endl;
}

void	printOperators(void)
{
	Fixed	a(15);
	Fixed	b(5);

	std::cout << a << " plus " << b << " equals to " << (a + b) << std::endl;
	std::cout << a << " minus " << b << " equals to " << (a - b) << std::endl;
	std::cout << a << " times " << b << " equals to " << (a * b) << std::endl;
	std::cout << a << " divided by " << b << " equals to " << (a / b) << std::endl;
	std::cout << std::endl;
}

void	printMax(void)
{
	Fixed	a(15);
	Fixed	b(5);

	std::cout << Fixed::max(a, b) << " is bigger than " << a.min(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << " is smaller than " << b.max(a, b) << std::endl;
	std::cout << std::endl;
}

void	defaultMain(void)
{
	Fixed a;

	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}

int	main( void ) {
	printIncr();
	printDecr();
	printCompares();
	printOperators();
	printMax();
	defaultMain();

	return (0);
}
