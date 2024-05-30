#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	*weapon;
public:
	HumanB(const std::string &newName);
	~HumanB();
	void	attack(void);
	void	setWeapon(Weapon &weapon);
};
