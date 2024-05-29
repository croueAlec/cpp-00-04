#pragma once
#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	int	index;
	Contact(void);
	~Contact();
	void	defineContact(int i);
	void	printContactPhonebook();
	void	printContactPage(std::string i);
};
