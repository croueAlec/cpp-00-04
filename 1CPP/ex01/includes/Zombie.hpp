#pragma once
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void	nameZombie(std::string tmp);
	void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);
