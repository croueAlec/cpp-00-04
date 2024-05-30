#include "HumanA.hpp"

HumanA::HumanA(const std::string &newName, Weapon &newWeapon) : name(newName), weapon(newWeapon) {}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
