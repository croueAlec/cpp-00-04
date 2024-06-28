#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <typeinfo>

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	Cat();
	~Cat();
	Cat&	operator=(const Cat& other);
	Cat&	operator=(const Animal& other);
	Cat(const Cat& other);
	void	makeSound(void) const;
	void	setIdeas(const std::string str);
	void	printIdeas(void);
};
