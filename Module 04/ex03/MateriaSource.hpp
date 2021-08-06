#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria *_cope[MAX_M];
public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &cope);
    MateriaSource &operator=(const MateriaSource &cope);
    ~MateriaSource();
    void learnMateria(AMateria *cope);
    AMateria *createMateria(std::string const &type);
};

#endif
