#pragma once
#include "AMateria.hpp"

#define	INV_SIZE 4

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	inventory[INV_SIZE];
	int	size;
public:
	Character();
	~Character();
	Character(const Character& other);
	Character& operator=(const Character& other);
	Character(std::string name);
	std::string	const & getName() const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};
