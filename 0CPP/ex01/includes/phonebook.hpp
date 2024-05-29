#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "contact.hpp"

class Phonebook
{
private:
	Contact	contacts[8];
	int	oldest_contact;
	int	empty;
public:
	Phonebook();
	~Phonebook();
	void	newContact();
	void	printPhonebook();
	void	selectContactPage();
};
