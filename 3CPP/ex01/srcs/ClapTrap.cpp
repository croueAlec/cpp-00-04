#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "default";
	this->announce();
	std::cout << " default constructor" << std::endl;
	health = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	this->announce();
	std::cout << " parameter constructor" << std::endl;
	health = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	this->announce();
	std::cout << " default destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	*this = ct;
	this->announce();
	std::cout << " copy constructor" << std::endl;
}

const	ClapTrap&	ClapTrap::operator=(const ClapTrap& ct)
{
	if (this != &ct)
	{
		this->health = ct.health;
		this->energy = ct.energy;
		this->attackDamage = ct.attackDamage;
		this->name = ct.name;
	}
	this->announce();
	std::cout << " copy assignment constructor" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	this->announce();
	if (energy <= 0)
	{
		std::cout << " No Energy left to attack" << std::endl;
		return ;
	}
	else if (health <= 0)
	{
		std::cout << " doesn't have any Health left" << std::endl;
		return ;
	}
	std::cout << " " << target << " loses " << attackDamage << " hit points" << std::endl;
	energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->announce();
	if (static_cast<int>(amount) >= health || health == 0)
	{
		health = 0;
		std::cout << " lost all his Health" << std::endl;
		return ;
	}
	health -= amount;
	std::cout << " lost " << amount << " Health" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
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
	if ((health + amount) >= 10)
	{
		health = 10;
	}
	else
	{
		health += amount;
	}
	std::cout << " healed " << health - prevHealth << " hit points" << std::endl;
	energy--;
}

int	ClapTrap::getEnergy(void)
{
	return (energy);
}

int	ClapTrap::getHealth(void)
{
	return (health);
}

void	ClapTrap::announce(void)
{
	std::cout << "[" << this->name << "]" << std::flush;
}
