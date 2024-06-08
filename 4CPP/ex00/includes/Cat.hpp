#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat&	operator=(const Cat& other);
	Cat(const Cat& other);
	void	makeSound(void) const;
};
