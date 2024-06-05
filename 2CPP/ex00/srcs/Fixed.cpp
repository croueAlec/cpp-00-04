#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = a.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	if (this != &fixed)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->fixedPoint = fixed.getRawBits();
	}
	else
	{
		std::cout << "Default constructor called" << std::endl;
	}

	return (*this);
}
