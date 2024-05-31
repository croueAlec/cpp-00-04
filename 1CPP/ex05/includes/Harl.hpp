#include <string>
#include <iostream>
#include <map>

class Harl
{
private:
	std::map<std::string, void (Harl::*)()> levelMap;
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};
