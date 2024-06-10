#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Default constructor animal class" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default destructor animal class" << std::endl;
}

Animal&		Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Assignment copy constructor animal class" << std::endl;
	return (*this);
}

Animal::Animal(const Animal& other)
{
	*this = other;
	std::cout << "Copy constructor animal class" << std::endl;
}

const std::string&	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "*animal sounds*" << std::endl;
}
