#pragma once
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	virtual ~Animal();
	Animal& operator=(const Animal& other);
	Animal(const Animal& other);
	const std::string&	getType(void) const;
	virtual	void	makeSound(void) const;
};
