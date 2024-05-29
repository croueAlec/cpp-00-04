#include <iostream>
#include <iomanip>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"

int	main(int argc, char *argv[])
{
	std::string	input;
	Phonebook	book;
	try
	{
		while (!std::cin.eof() && std::getline(std::cin, input))
		{
			if (input == "EXIT")
			{
				break ;
			}
			else if (input == "ADD")
			{
				book.newContact();
			}
			else if (input == "SEARCH")
			{
				book.printPhonebook();
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	(void)argc;
	(void)argv;
	return (0);
}
