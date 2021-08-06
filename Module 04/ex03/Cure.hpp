#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure(void);
    Cure(const Cure &cope);
    Cure &operator=(const Cure &cope);
    AMateria *clone(void) const;
    void use(ICharacter &target);
};

#endif
