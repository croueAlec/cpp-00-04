#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default constructor ice class" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Default destructor ice class" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	*this = other;
	std::cout << "Copy destructor ice class" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
	{
		this->AMateria::operator=(other);
	}
	std::cout << "Copy assignment operator ice class" << std::endl;
	return (*this);
}

AMateria*	Ice::clone() const
{
	Ice*	other = new (std::nothrow) Ice();

	return (other);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
