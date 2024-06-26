#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

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

// int main()
// {
// 	IMateriaSource* source = new MateriaSource();
// 	AMateria* ice = new Ice();
// 	AMateria* cure = new Cure();
// 	source->learnMateria(ice);
// 	source->learnMateria(cure);
// 	delete cure;
// 	delete ice;

// 	ICharacter* hector = new Character("hector");
// 	AMateria* tmp;
// 	tmp = source->createMateria("ice");
// 	hector->equip(tmp);
// 	delete tmp;
// 	tmp = source->createMateria("cure");
// 	hector->equip(tmp);
// 	delete tmp;
// 	ICharacter* octave = new Character("octave");
// 	hector->use(0, *octave);
// 	hector->use(1, *octave);
// 	delete octave;
// 	delete hector;
// 	delete source;
// 	return 0;
// }
