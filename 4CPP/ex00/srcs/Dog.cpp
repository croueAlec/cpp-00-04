#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Default constructor dog class" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default destructor dog class" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Assignment copy constructor dog class" << std::endl;
	return (*this);
}

Dog::Dog(const Dog& other)
{
	*this = other;
	std::cout << "Copy constructor dog class" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}
