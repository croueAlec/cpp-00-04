#include "Character.hpp"
#include <iostream>

Character::Character()
{
	this->name = "default";
	this->size = 0;
	std::cout << "Default constructor for the Character class" << std::endl;
}

Character::~Character()
{
	std::cout << "Default destructor for the Character class" << std::endl;
}

Character::Character(std::string name)
{
	this->name = name;
	this->size = 0;
	std::cout << "Parameted constructor for the Character class" << std::endl;
}

Character::Character(const Character& other)
{
	*this = other;
	std::cout << "Copy constructor for the Character class" << std::endl;
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->name = other.getName();
	}
	std::cout << "Copy assignment constructor for the Character class" << std::endl;
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (size >= INV_SIZE)
	{
		std::cout << this->getName() << "'s inventory is full" << std::endl;
		return ;
	}
	inventory[size] = m;
	size++;
	std::cout << this->getName() << " equipped " << m->getType() << " materia" << std::endl;;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > size)
	{
		std::cout << "Index is out of range" << std::endl;
		return ;
	}

	for (int i = idx; i < size; i++)
	{
		if (i)
			inventory[i - 1] = inventory[i];
	}
	size--;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > size)
	{
		std::cout << "Index is out of range" << std::endl;
		return ;
	}

	inventory[idx]->use(target);
}
