#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"

int main(void)
{
	AMateria* i = new Ice();
	AMateria* c = new Cure();
	Character	*player = new Character("player");
	i->use(*player);
	c->use(*player);
	player->equip(i);
	player->equip(c);
	player->equip(i);
	player->equip(c);
	player->equip(i);
	for (int j = 0; j < INV_SIZE; j++)
	{
		player->use(j, *player);
	}
	delete	c;
	delete	i;
	delete	player;
	return 0;
}

