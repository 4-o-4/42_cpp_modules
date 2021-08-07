#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
}

Cure::Cure(const Cure &cope) : AMateria(cope._type) {
}

Cure &Cure::operator=(const Cure &cope) {
    _type = cope._type;
    return *this;
}

AMateria *Cure::clone(void) const {
    return new Cure;
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
