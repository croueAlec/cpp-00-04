#pragma once
#include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(const std::string &weaponType);
	~Weapon();
	const std::string&	getType(void);
	void	setType(const std::string &newType);
};
