#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat&	operator=(const WrongCat& other);
	WrongCat(const WrongCat& other);
	void	makeSound(void) const;
};
