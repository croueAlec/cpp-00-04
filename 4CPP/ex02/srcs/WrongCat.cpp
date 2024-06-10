#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Default constructor Wrongcat class" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default destructor Wrongcat class" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Assignment copy constructor Wrongcat class" << std::endl;
	return (*this);
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
	std::cout << "Copy constructor Wrongcat class" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
