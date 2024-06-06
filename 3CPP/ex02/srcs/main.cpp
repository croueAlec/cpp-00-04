#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	{
		FragTrap	def;

		def.highFivesGuys();
		def.attack("Andrei");
		def.attack("Andrei");
		def.attack("Andrei");
		def.takeDamage(99);
		def.takeDamage(127);
	}
	std::cout << std::endl;

	{
		FragTrap	Nabuchodonosor("Nabuchodonosor 2");

		for (size_t i = 0; i < 5; i++)
		{
			Nabuchodonosor.highFivesGuys();
		}
	}
	return (0);
}
