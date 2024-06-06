#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "default";
	this->announce();
	std::cout << " default constructor" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	this->announce();
	std::cout << " default destructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->announce();
	std::cout << " parameter constructor" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& ft)
{
	*this = ft;
	this->announce();
	std::cout << " copy constructor" << std::endl;
}

const	FragTrap&	FragTrap::operator=(const FragTrap& ft)
{
	if (this != &ft)
	{
		this->health = ft.health;
		this->energy = ft.energy;
		this->attackDamage = ft.attackDamage;
		this->name = ft.name;
	}
	this->announce();
	std::cout << " copy assignment constructor" << std::endl;
	return (*this);
}

void	FragTrap::beRepaired(unsigned int amount)
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

void	FragTrap::announce(void)
{
	std::cout << "(" << this->name << ")" << std::flush;
}

void	FragTrap::highFivesGuys(void)
{
	this->announce();
	std::cout << " Hey how about a high five guys ?" << std::endl;
	std::cout << "..." << std::endl;
	std::cout << std::endl;
}
