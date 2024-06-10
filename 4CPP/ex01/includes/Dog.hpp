#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	brain;
public:
	Dog();
	~Dog();
	Dog&	operator=(const Dog& other);
	Dog(const Dog& other);
	void	makeSound(void) const;
	void	setIdeas(const std::string str);
	void	printIdeas(void);
};
