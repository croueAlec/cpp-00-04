#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	zomb;

	try
	{
		zomb = new Zombie(name);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (NULL);
	}
	return (zomb);
}
