#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	horde;

	try
	{
		horde = new Zombie[N];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (NULL);
	}
	for (int i = 0; i < N; i++)
	{
		horde[i].nameZombie(name);
	}
	return (horde);
}
