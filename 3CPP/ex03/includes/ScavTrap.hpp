#pragma once
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& ct);
	const	ScavTrap&	operator=(const ScavTrap& ct);

	void	guardGate(void);

	virtual void	beRepaired(unsigned int amount);

	void	announce(void);
};
