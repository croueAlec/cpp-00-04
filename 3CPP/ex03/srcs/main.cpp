#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	{
		DiamondTrap	def;

		def.highFivesGuys();
		def.guardGate();
		def.whoAmI();
	}
	std::cout << std::endl;

	{
		DiamondTrap	isidore("Isidore");

		std::cout << "Isidore's health is " << isidore.getHealth() << " and his energy is " << isidore.getEnergy() << std::endl;
		isidore.highFivesGuys();
		isidore.guardGate();
		isidore.whoAmI();
		isidore.attack("Andrei");
		isidore.takeDamage(99);
		isidore.beRepaired(99);
	}
	return (0);
}
