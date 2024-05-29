#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	std::string	input;

	while (!std::cin.eof() && std::getline(std::cin, input))
	{
		if (input == "EXIT")
		{
			std::cout << "CHANGEME" << std::endl;
			return (0);
		}
		else if (input == "ADD")
		{
			std::cout << "Contact added" << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout << "Printing contacts" << std::endl;
		}
	}
	(void)argc;
	(void)argv;
	return (0);
}
