#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap	def;

		def.attack("Andrei");
		def.takeDamage(9);
		def.beRepaired(88);
	}
	std::cout << std::endl;

	{
		ClapTrap	henri("Henri");

		for (size_t i = 0; i < 11; i++)
		{
			std::cout << henri.getEnergy() << std::endl;
			henri.attack("Andrei");
		}
		henri.beRepaired(44);
	}
	std::cout << std::endl;

	{
		ClapTrap	hector("Hector");


		for (size_t i = 0; i < 9; i++)
		{
			hector.takeDamage(1);
		}
		for (size_t i = 0; i < 11; i++)
		{
			hector.beRepaired(1);
		}
		hector.attack("Andrei");
	}
	std::cout << std::endl;

	{
		ClapTrap	gilgamesh("Gilgamesh");


		for (size_t i = 0; i < 11; i++)
		{
			gilgamesh.takeDamage(1);
		}
		for (size_t i = 0; i < 11; i++)
		{
			gilgamesh.beRepaired(1);
		}
		gilgamesh.attack("Andrei");
	}
	return (0);
}
