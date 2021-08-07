#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
}

Ice::Ice(const Ice &cope) : AMateria(cope._type) {
}

Ice &Ice::operator=(const Ice &cope) {
    _type = cope._type;
    return *this;
}

AMateria *Ice::clone(void) const {
    return new Ice;
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
