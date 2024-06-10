#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

#define ANIMAL_NBR 4

void	catsAndDogs(void)
{
	{
		Cat*	chat;
		try
		{
			chat = new Cat();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return ;
		}
		chat->setIdeas("Je vais reveiller alec en pleine nuit");
		chat->printIdeas();
		std::cout << std::endl;

		Cat*	chatDeux;
		try
		{
			chatDeux = new Cat(*chat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			delete	chat;
			return ;
		}
		chatDeux->printIdeas();
		delete	chat;
		delete	chatDeux;
	}
	std::cout << std::endl;
	{
		Dog*	chien;
		try
		{
			chien = new Dog();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		chien->setIdeas("Je pense donc je suis un chien");
		chien->printIdeas();
		std::cout << std::endl;
		Dog*	chienDeux;
		try
		{
			chienDeux = new Dog(*chien);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			delete	chienDeux;
			return ;
		}
		chienDeux->printIdeas();
		delete	chien;
		delete	chienDeux;
	}
	std::cout << std::endl;
}

int	main(void)
{
	Animal*	zoo[ANIMAL_NBR];
	for (size_t i = 0; i < ANIMAL_NBR; i++)
	{
		try
		{
			if (i % 2)
			{
				zoo[i] = new Dog;
			}
			else
			{
				zoo[i] = new Cat;
			}
		}
		catch(const std::exception& e)
		{
			for (size_t j = 0; j < i; j++)
			{
				delete zoo[j];
			}
			std::cerr << e.what() << '\n';
			break ;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	catsAndDogs();

	for (size_t i = 0; i < ANIMAL_NBR; i++)
	{
		std::cout << std::endl;
		delete zoo[i];
	}
	return (0);
}
