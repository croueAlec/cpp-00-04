#include "Zombie.hpp"

Zombie::Zombie(std::string tmp)
{
	name = tmp;
}

Zombie::~Zombie()
{
	std::cout << "Destroy " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
