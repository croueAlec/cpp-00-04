#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default constructor cat class" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default destructor cat class" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Assignment copy constructor cat class" << std::endl;
	return (*this);
}

Cat::Cat(const Cat& other)
{
	*this = other;
	std::cout << "Copy constructor cat class" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
