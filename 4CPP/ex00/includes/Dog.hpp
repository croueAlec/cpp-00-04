#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog&	operator=(const Dog& other);
	Dog(const Dog& other);
	void	makeSound(void) const;
};
