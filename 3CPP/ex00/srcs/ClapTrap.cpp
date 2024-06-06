#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor" << std::endl;
	name = "default";
	health = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "Parameter constructor" << std::endl;
	health = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	*this = ct;
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
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "[" << this->name << "]" << std::flush;
	if (energy <= 0)
	{
		std::cout << " No Energy left for ClapTrap to attack" << std::endl;
		return ;
	}
	else if (health <= 0)
	{
		std::cout << " ClapTrap doesn't have any Health left" << std::endl;
		return ;
	}
	std::cout << " " << target << " loses " << attackDamage << " hit points." << std::endl;
	energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[" << this->name << "]" << std::flush;
	if (health - amount <= 0 || health == 0)
	{
		health = 0;
		std::cout << " ClapTrap lost all his Health" << std::endl;
		return ;
	}
	health -= amount;
	std::cout << " ClapTrap lost " << amount << " Health" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[" << this->name << "]" << std::flush;
	if (energy <= 0)
	{
		std::cout << " No energy left for ClapTrap to repair itself" << std::endl;
		return ;
	}
	else if (health <= 0)
	{
		std::cout << " ClapTrap doesn't have any Health left" << std::endl;
		return ;
	}
	std::cout << " ClapTrap healed " << amount << " hit points" << std::endl;
	if ((health + amount) >= 10)
	{
		health = 10;
	}
	else
	{
		health += amount;
	}
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
