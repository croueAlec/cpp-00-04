#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "default";
	this->announce();
	std::cout << " default constructor" << std::endl;
	ClapTrap::name = "default_clap_name";
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	this->announce();
	std::cout << " default destructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	this->announce();
	std::cout << " parameter constructor" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt)
{
	*this = dt;
	this->announce();
	std::cout << " copy constructor" << std::endl;
}

const	DiamondTrap& DiamondTrap::operator=(const DiamondTrap& dt)
{
	if (this != &dt)
	{
		this->health = dt.health;
		this->energy = dt.energy;
		this->attackDamage = dt.attackDamage;
		this->name = dt.name;
	}
	this->announce();
	std::cout << " copy assignment constructor" << std::endl;
	return (*this);
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	int	prevHealth = health;

	this->announce();
	if (energy <= 0)
	{
		std::cout << " No energy left to repair itself" << std::endl;
		return ;
	}
	else if (health <= 0)
	{
		std::cout << " doesn't have any Health left" << std::endl;
		return ;
	}
	if ((health + amount) >= 100)
	{
		health = 100;
	}
	else
	{
		health += amount;
	}
	std::cout << " healed " << health - prevHealth << " hit points" << std::endl;
	energy--;
}

void	DiamondTrap::whoAmI(void)
{
	this->announce();
	std::cout << " I am " << this->name << " son of " << ClapTrap::name << std::endl;
}

void	DiamondTrap::announce(void)
{
	std::cout << "<" << this->name << ">" << std::flush;
}
