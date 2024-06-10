#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& other);
	WrongAnimal(const WrongAnimal& other);
	const std::string&	getType(void) const;
	void	makeSound(void) const;
};
