#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Default constructor dog class" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Default destructor dog class" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Assignment copy constructor dog class" << std::endl;
	return (*this);
}

Dog&	Dog::operator=(const Animal& other)
{
	if (typeid(*this) == typeid(other))
	{
		return Dog::operator=((Dog &)other);
	}
	else
	{
		return *this;
	}
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

void	Dog::setIdeas(const std::string str)
{
	this->brain->ideas[0] = str;
	this->brain->ideas[IDEA_NBR - 1] = str;
}

void	Dog::printIdeas(void)
{
	std::cout << brain->ideas[0] << "\t" << brain->ideas[99] << std::endl;
}
