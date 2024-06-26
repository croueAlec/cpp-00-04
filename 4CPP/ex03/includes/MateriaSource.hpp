#pragma once
#include "IMateriaSource.hpp"
#include "Character.hpp"

class MateriaSource : public IMateriaSource {
  private:
	AMateria*	storedMateria[INV_SIZE];
	int	size;
  public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);

	void	learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
};
