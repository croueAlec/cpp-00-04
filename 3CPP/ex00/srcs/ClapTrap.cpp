#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "default";
	std::cout << "[" << this->name << "]" << std::flush;
	std::cout << " efault constructor" << std::endl;
	health = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "[" << this->name << "]" << std::flush;
	std::cout << " parameter constructor" << std::endl;
	health = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[" << this->name << "]" << std::flush;
	std::cout << " default destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	*this = ct;
	std::cout << "[" << this->name << "]" << std::flush;
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
	std::cout << "[" << this->name << "]" << std::flush;
	std::cout << " copy assignment constructor" << std::endl;
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
	std::cout << " " << target << " loses " << attackDamage << " hit points" << std::endl;
	energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[" << this->name << "]" << std::flush;
	if (static_cast<int>(amount) >= health || health == 0)
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
	int	prevHealth = health;
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
	if ((health + amount) >= 10)
	{
		health = 10;
	}
	else
	{
		health += amount;
	}
	std::cout << " ClapTrap healed " << health - prevHealth << " hit points" << std::endl;
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
