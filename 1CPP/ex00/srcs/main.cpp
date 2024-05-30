#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
	Zombie*	firstZombie = newZombie("Hector");

	firstZombie->announce();
	for (int i = 1; i < argc; i++)
	{
		Zombie* currentZombie = newZombie(argv[i]);
		if (!currentZombie)
			continue ;
		currentZombie->announce();
		delete currentZombie;
	}
	firstZombie->announce();
	randomChump("Helen");
	for (int i = argc - 1; i > 0; i--)
	{
		randomChump(argv[i]);
	}
	firstZombie->announce();
	delete firstZombie;
	return (0);
}

