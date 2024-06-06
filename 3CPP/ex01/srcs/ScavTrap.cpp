#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "default";
	this->announce();
	std::cout << " default constructor {ScavTrap}" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->announce();
	std::cout << " parameter constructor {ScavTrap}" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	this->announce();
	std::cout << " default destructor {ScavTrap}" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st)
{
	*this = st;
	this->announce();
	std::cout << " copy constructor" << std::endl;
}

const	ScavTrap& ScavTrap::operator=(const ScavTrap& st)
{
	if (this != &st)
	{
		this->health = st.health;
		this->energy = st.energy;
		this->attackDamage = st.attackDamage;
		this->name = st.name;
	}
	this->announce();
	std::cout << " copy assignment constructor {ScavTrap}" << std::endl;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	this->announce();
	if (health <= 0)
	{
		std::cout << " has no health left" << std::endl;
		return ;
	}
	std::cout << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::announce(void)
{
	std::cout << "{" << this->name << "}" << std::flush;
}
