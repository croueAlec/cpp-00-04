#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// int main(void)
// {
// 	AMateria* i = new Ice();
// 	AMateria* c = new Cure();
// 	Character	*player = new Character("player");
// 	i->use(*player);
// 	c->use(*player);
// 	player->equip(i);
// 	player->equip(c);
// 	player->equip(i);
// 	player->equip(c);
// 	player->equip(i);
// 	for (int j = 0; j < INV_SIZE; j++)
// 	{
// 		player->use(j, *player);
// 	}
// 	delete	c;
// 	delete	i;
// 	delete	player;
// 	return 0;
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
