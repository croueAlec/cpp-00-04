#include "Harl.hpp"

int main(void)
{
	Harl harold;

	harold.complain("DEBUG");
	std::cout << std::endl;
	harold.complain("INFO");
	std::cout << std::endl;
	harold.complain("WARNING");
	std::cout << std::endl;
	harold.complain("ERROR");
	std::cout << std::endl;
	harold.complain("DOES NOT EXIST");
	return (0);
}

