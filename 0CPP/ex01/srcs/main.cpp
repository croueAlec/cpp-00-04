#include <iostream>
#include <iomanip>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"

int	main(void)
{
	std::string	input;
	Phonebook	book;
	try
	{
		std::cout << "Type ADD to add a contact in the phonebook, SEARCH to display the phonebook, or EXIT to exit the phonebook." << std::endl;
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
			std::cout << "Type ADD to add a contact in the phonebook, SEARCH to display the phonebook, or EXIT to exit the phonebook." << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
