#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "Default constructor Wronganimal class" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default destructor Wronganimal class" << std::endl;
}

WrongAnimal&		WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Assignment copy constructor Wronganimal class" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
	std::cout << "Copy constructor Wronganimal class" << std::endl;
}

const std::string&	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*Wronganimal sounds*" << std::endl;
}
