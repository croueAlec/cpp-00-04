#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harold;

	if (argc != 2)
	{
		std::cerr << "error : Bad argument number" << std::endl;
		return (1);
	}
	harold.complain(argv[1]);
	return (0);
}

