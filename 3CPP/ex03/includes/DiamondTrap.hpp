#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& dt);
	const	DiamondTrap& operator=(const DiamondTrap& dt);

	// void	beRepaired(unsigned int amount);

	void	whoAmI(void);

	void	announce(void);
};
