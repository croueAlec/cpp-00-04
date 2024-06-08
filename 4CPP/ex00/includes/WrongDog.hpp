#pragma once
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	~WrongDog();
	WrongDog&	operator=(const WrongDog& other);
	WrongDog(const WrongDog& other);
	void	makeSound(void) const;
};
