#pragma once
#include <iostream>

class Fixed
{
private:
	int		fixedPoint;
	static const	int	fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(int val);
	Fixed(float val);
	~Fixed();
	Fixed& operator = (const Fixed &fixed);

	Fixed& operator++ ();
	Fixed& operator-- ();
	Fixed operator++ (int value);
	Fixed operator-- (int value);

	bool	operator>(const Fixed& fixed) const;
	bool	operator<(const Fixed& fixed) const;
	bool	operator>=(const Fixed& fixed) const;
	bool	operator<=(const Fixed& fixed) const;
	bool	operator==(const Fixed& fixed) const;
	bool	operator!=(const Fixed& fixed) const;

	Fixed	operator+(const Fixed& fixed);
	Fixed	operator-(const Fixed& fixed);
	Fixed	operator*(const Fixed& fixed);
	Fixed	operator/(const Fixed& fixed);

	static Fixed&	min(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream&out, Fixed fixed);
