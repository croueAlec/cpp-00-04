#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default constructor cat class" << std::endl;
	brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Default destructor cat class" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Assignment copy constructor cat class" << std::endl;
	return (*this);
}

Cat&	Cat::operator=(const Animal& other)
{
	if (typeid(*this) == typeid(other))
	{
		return Cat::operator=((Cat &)other);
	}
	else
	{
		return *this;
	}
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

void	Cat::setIdeas(const std::string str)
{
	this->brain->ideas[0] = str;
	this->brain->ideas[IDEA_NBR - 1] = str;
}

void	Cat::printIdeas(void)
{
	std::cout << brain->ideas[0] << "\t" << brain->ideas[IDEA_NBR - 1] << std::endl;
}
