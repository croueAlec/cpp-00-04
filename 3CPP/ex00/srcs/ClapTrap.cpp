#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "default";
	health = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	health = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
}

void	ClapTrap::attack(const std::string& target)
{
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	
}
