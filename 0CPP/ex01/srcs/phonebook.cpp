#include "phonebook.hpp"
#include <limits>

Contact::Contact()
{
	index = -1;
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

std::string	getInfo(std::string message)
{
	std::string	input;

	std::cout << message << std::endl;
	if (!std::getline(std::cin, input) || input.empty())
	{
		throw std::logic_error("Empty contact field, exiting");
	}
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!std::isalnum(input[i]) && input[i] != '+' && input[i] != '-')
			throw std::logic_error("You may only use alphanumerical characters as well as '-' and '+'");
	}
	return (input);
}

void	Contact::defineContact(int i)
{
	index = i;
	first_name = getInfo("Enter contact's first name");
	last_name = getInfo("Enter contact's last name");
	nickname = getInfo("Enter contact's nickname");
	phone_number = getInfo("Enter contact's phone number");
	darkest_secret = getInfo("Enter contact's darkest secret");
}

Contact::~Contact()
{
}

void	printColumnValue(std::string input)
{
	if (input.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << input << "|" << std::flush;
	}
	else
	{
		std::cout << std::setw(9);
		input.resize(9);
		std::cout << input << ".|" << std::flush;
	}
}

void	Contact::printContactPhonebook()
{
	switch (this->index)
	{
	case -1:
		return ;
	case 0:
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|         0|" << std::flush;
		break;
	case 1:
		std::cout << "|         1|" << std::flush;
		break;
	case 2:
		std::cout << "|         2|" << std::flush;
		break;
	case 3:
		std::cout << "|         3|" << std::flush;
		break;
	case 4:
		std::cout << "|         4|" << std::flush;
		break;
	case 5:
		std::cout << "|         5|" << std::flush;
		break;
	case 6:
		std::cout << "|         6|" << std::flush;
		break;
	case 7:
		std::cout << "|         7|" << std::flush;
		break;
	}
	printColumnValue(this->first_name);
	printColumnValue(this->last_name);
	printColumnValue(this->nickname);
	std::cout << std::endl;
}


Phonebook::Phonebook()
{
	oldest_contact = 0;
	empty = 1;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::newContact()
{
	empty = 0;
	contacts[oldest_contact].defineContact(oldest_contact);
	oldest_contact++;
	oldest_contact %= 8;
	std::cout << "Contact added" << std::endl;
}

void	Contact::printContactPage(std::string i)
{
	std::cout << "Contact's index is " << i << std::endl;
	std::cout << "Contact's first name is " << this->first_name << std::endl;
	std::cout << "Contact's last name is " << this->last_name << std::endl;
	std::cout << "Contact's nickname is " << this->nickname << std::endl;
	std::cout << "Contact's phone number is " << this->phone_number << std::endl;
	std::cout << "Contact's darkest secret is " << this->darkest_secret << std::endl;
}

void	Phonebook::selectContactPage(void)
{
	std::cout << "Please enter a contact's index to see their contact page or anything else to go back" << std::endl;
	std::string	input;
	if (!std::getline(std::cin, input))
	{
		throw std::logic_error("Cin closed, exiting");
	}
	if (input == "0")
		contacts[0].printContactPage(input);
	else if (input == "1" && contacts[1].index >= 0)
		contacts[1].printContactPage(input);
	else if (input == "2" && contacts[2].index >= 0)
		contacts[2].printContactPage(input);
	else if (input == "3" && contacts[3].index >= 0)
		contacts[3].printContactPage(input);
	else if (input == "4" && contacts[4].index >= 0)
		contacts[4].printContactPage(input);
	else if (input == "5" && contacts[5].index >= 0)
		contacts[5].printContactPage(input);
	else if (input == "6" && contacts[6].index >= 0)
		contacts[6].printContactPage(input);
	else if (input == "7" && contacts[7].index >= 0)
		contacts[7].printContactPage(input);
}

void	Phonebook::printPhonebook()
{
	if (empty)
	{
		std::cout << "Phonebook is currently empty, use ADD too add a contact" << std::endl;
		return ;
	}

	std::cout << "Phonebook :" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		contacts[i].printContactPhonebook();
	}
	selectContactPage();
}
