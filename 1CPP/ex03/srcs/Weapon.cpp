#include "Weapon.hpp"

Weapon::Weapon(const std::string &weaponType) : type(weaponType) {}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(const std::string &newType)
{
	this->type = newType;
}
