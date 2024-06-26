#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	std::cout << "Default constructor called for MateriaSource" << std::endl;

	size = 0;
	for (size_t i = 0; i < INV_SIZE; i++)
	{
		this->storedMateria[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	std::cout << "Default destructor called for MateriaSource" << std::endl;

	size = 0;
	for (size_t i = 0; i < INV_SIZE; i++)
	{
		delete this->storedMateria[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
	std::cout << "Copy constructor called for MateriaSource" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < this->size; i++)
		{
			delete this->storedMateria[i];
		}
		for (int i = 0; i < other.size; i++)
		{
			this->storedMateria[i] = other.storedMateria[i];
		}
		this->size = other.size;
	}
	std::cout << "Copy assignment operator called for MateriaSource" << std::endl;
	return *this;
}

void	MateriaSource::learnMateria(AMateria* materia) {
	if (size == INV_SIZE) {
		std::cout << "Materia source is full" << std::endl;
		return;
	}

	storedMateria[size] = materia->clone();
	size++;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	if (!size) {
		return NULL;
	}

	for (int i = 0; i < this->size; i++)
	{
		if (this->storedMateria[i]->getType() == type) {
			return this->storedMateria[i]->clone();
		}
	}
	return NULL;
}
