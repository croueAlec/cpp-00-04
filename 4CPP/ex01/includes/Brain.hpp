#pragma once
#include <string>
#include <iostream>

#define IDEA_NBR 100

class Brain
{
public:
	std::string	ideas[IDEA_NBR];
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
};
