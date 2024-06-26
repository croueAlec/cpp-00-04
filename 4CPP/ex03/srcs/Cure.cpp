#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default constructor cure class" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Default destructor cure class" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	*this = other;
	std::cout << "Copy destructor cure class" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	(void)other;
	std::cout << "Copy assignment operator cure class" << std::endl;
	return (*this);
}

AMateria*	Cure::clone() const
{
	Cure*	other = new (std::nothrow) Cure();

	return (other);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
