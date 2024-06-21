#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& ft);
	const FragTrap& operator=(const FragTrap& ft);

	void	highFivesGuys(void);

	// void	beRepaired(unsigned int amount);

	void	announce(void);
};
