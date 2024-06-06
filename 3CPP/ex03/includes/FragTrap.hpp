#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& ft);
	const FragTrap& operator=(const FragTrap& ft);

	void	highFivesGuys(void);

	virtual void	beRepaired(unsigned int amount);

	void	announce(void);
};
