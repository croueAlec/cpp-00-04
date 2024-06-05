#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = val << this->fractionalBits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(val * (1 << this->fractionalBits));
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
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
	{
		this->fixedPoint = fixed.getRawBits();
	}
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixedPoint) / (1 << this->fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (static_cast<int>(this->fixedPoint >> this->fractionalBits));
}

std::ostream& operator<<(std::ostream&out, Fixed fixed)
{
	out << fixed.toFloat();
	return (out);
}
