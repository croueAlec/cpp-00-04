#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string	name;
	int	health;
	int	energy;
	int	attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap(const ClapTrap &ct);
	const	ClapTrap&	operator=(const ClapTrap& ct);

	void	takeDamage(unsigned int amount);
	virtual void	attack(const std::string& target);
	virtual void	beRepaired(unsigned int amount);

	int		getEnergy(void);
	int		getHealth(void);
	virtual void	announce(void);
};
