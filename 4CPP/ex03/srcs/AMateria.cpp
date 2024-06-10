#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : type("default")
{
	std::cout << "Default constructor for AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "Parameted constructor for AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Default destructor for AMateria" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
	std::cout << "Copy constructor for AMateria" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Copy assignment constructor for AMateria" << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	if (this->getType() == "ice")
	{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}
	else if (this->getType() == "cure")
	{
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	}
	else
	{
		std::cout << target.getName() << "'s powers are yet unknown" << std::endl;
	}
}
