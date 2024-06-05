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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream&out, Fixed fixed);
