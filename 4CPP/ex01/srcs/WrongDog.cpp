#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	type = "WrongDog";
	std::cout << "Default constructor Wrongdog class" << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "Default destructor Wrongdog class" << std::endl;
}

WrongDog&	WrongDog::operator=(const WrongDog& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Assignment copy constructor Wrongdog class" << std::endl;
	return (*this);
}

WrongDog::WrongDog(const WrongDog& other)
{
	*this = other;
	std::cout << "Copy constructor Wrongdog class" << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}
