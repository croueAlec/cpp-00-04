#pragma once
#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	type;
public:
	AMateria();
	AMateria(std::string const & type);
	~AMateria();
	AMateria(const AMateria& other);
	AMateria& operator=(const AMateria& other);

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
