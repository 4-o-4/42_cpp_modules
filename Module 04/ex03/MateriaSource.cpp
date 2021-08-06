#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    int i = 0;
    while (i < MAX_M)
        _cope[i++] = NULL;
};

MateriaSource::MateriaSource(const MateriaSource &cope) {
    int i = 0;
    while (i < MAX_M) {
        _cope[i] = cope._cope[i];
        i++;
    }
};

MateriaSource &MateriaSource::operator=(const MateriaSource &cope) {
    int i = 0;
    while (i < MAX_M) {
        delete _cope[i];
        _cope[i] = cope._cope[i]->clone();
        i++;
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    int i = 0;
    while (i < MAX_M)
        delete _cope[i++];
}

void MateriaSource::learnMateria(AMateria *cope) {
    int i = 0;
    while (_cope[i] != NULL && i < MAX_M)
        i++;
    if (i < MAX_M)
        _cope[i] = cope;
};

AMateria *MateriaSource::createMateria(std::string const &type) {
    int i = 0;
    while (_cope[i]->getType() != type && i < MAX_M)
        i++;
    if (i < MAX_M)
        return _cope[i]->clone();
    return NULL;
};
