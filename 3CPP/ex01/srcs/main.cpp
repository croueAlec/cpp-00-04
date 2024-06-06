#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	{
		ScavTrap	def;

		def.guardGate();
		def.takeDamage(1000);
		def.guardGate();
		def.beRepaired(5);
		def.attack("Andrei");
	}
	std::cout << std::endl;

	{
		ScavTrap	mitch("Mitch");

		mitch.attack("Andrei");
		mitch.beRepaired(17);
		for (size_t i = 0; i < 9; i++)
		{
			mitch.takeDamage(10);
		}

		for (size_t i = 0; i < 8; i++)
		{
			mitch.beRepaired(17);
		}
	}
	return (0);
}
