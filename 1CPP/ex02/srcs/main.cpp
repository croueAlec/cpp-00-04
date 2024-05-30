#include <iostream>
#include <string>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Pointer to string " << &str << std::endl;
	std::cout << "Also a pointer to string, stored in stringPTR " << stringPTR << std::endl;
	std::cout << "Reference to str, stored in stringREF " << &stringREF << std::endl;

	std::cout << "\nThe string str : " << str << std::endl;
	std::cout << "The string str accessed via stringPTR : " << *stringPTR << std::endl;
	std::cout << "The string str as referenced by stringREF :  " << stringREF << std::endl;

	return (0);
}
