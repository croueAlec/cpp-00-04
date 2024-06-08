#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const	Animal* meta = new Animal();
	const	Animal*	j = new Dog();
	const	Animal* i = new Cat();

	std::cout << j->getType() << std::endl;
	j->makeSound();
	
	std::cout << i->getType() << std::endl;
	i->makeSound();

	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	delete i;
	delete j;
	delete meta;

	std::cout << std::endl;

	const	WrongAnimal* wrongMeta = new WrongAnimal();
	const	WrongAnimal* wrongDog = new WrongDog();
	const	WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongDog->getType() << std::endl;
	wrongDog->makeSound();
	
	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeSound();

	std::cout << wrongMeta->getType() << std::endl;
	wrongMeta->makeSound();
	delete wrongCat;
	delete wrongDog;
	delete wrongMeta;

	return (0);
}
