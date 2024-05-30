#include "Zombie.hpp"

void	hordeExample(int N, std::string name)
{
	Zombie*	horde = zombieHorde(N, name);

	if (!horde)
		return ;
	for (int i = 0; i < N && horde; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}

int main(void)
{
	hordeExample(3, "Three");
	hordeExample(2, "Two");
	hordeExample(4, "Four");
	return (0);
}
