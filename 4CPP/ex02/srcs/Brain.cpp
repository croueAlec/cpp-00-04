#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor for the Brain class" << std::endl;
	for (size_t i = 0; i < IDEA_NBR; i++)
	{
		ideas[i] = "idea";
	}
}

Brain::~Brain()
{
	std::cout << "Default destructor for the Brain class" << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Copy constructor for the Brain class" << std::endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	std::cout << "Copy assignment constructor for the Brain class" << std::endl;
	return (*this);
}

