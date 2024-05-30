#include "HumanB.hpp"

HumanB::HumanB(const std::string &newName) : name(newName), weapon(NULL) {}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::string	currentWeapon = "bare hands";
	if (this->weapon)
		currentWeapon = this->weapon->getType();
	std::cout << name << " attacks with their " << currentWeapon << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
