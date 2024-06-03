#include "Harl.hpp"
#include <iterator>

Harl::Harl()
{
	levelString[0] = "DEBUG";
	levelString[1] = "INFO";
	levelString[2] = "WARNING";
	levelString[3] = "ERROR";
}

Harl::~Harl()
{
}

size_t		Harl::findIndex(std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (level.compare(levelString[i]) == 0)
			return (i);
	}
	return (5);
}

void	Harl::complain(std::string level)
{
	if (findIndex(level) <= 3)
	{
		switch (findIndex(level)) /* FALLING THROUGH THIS SWITCH CASE IS VOLUNTARY */
		{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
