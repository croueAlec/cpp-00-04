#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	// Animal*	animal = new Animal();

	Animal*	chat = new Cat();
	Animal*	chien = new Dog();

	std::cout << chat->getType() << std::endl;
	chat->makeSound();
	std::cout << chien->getType() << std::endl;
	chien->makeSound();

	// delete	animal;
	delete	chat;
	delete	chien;
	return (0);
}
