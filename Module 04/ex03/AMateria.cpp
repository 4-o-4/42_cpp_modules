#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {
}

AMateria::AMateria(const AMateria &cope) : _type(cope._type) {
}

AMateria &AMateria::operator=(const AMateria &cope) {
    _type = cope._type;
    return *this;
}

AMateria::~AMateria() {
}

std::string const &AMateria::getType(void) const {
    return _type;
}

void AMateria::use(ICharacter &target) {
    std::cout << target.getName() << std::endl;
}
