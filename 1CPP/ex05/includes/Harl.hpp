#include <string>
#include <iostream>

typedef void	(*f)();

class Harl
{
private:
	std::string	levelString[4];
	void		(Harl::*f[4])();
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};
