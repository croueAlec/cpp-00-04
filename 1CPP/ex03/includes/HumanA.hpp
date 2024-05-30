#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon	&weapon;
public:
	HumanA(const std::string &newName, Weapon &newWeapon);
	~HumanA();
	void	attack(void);
};
