#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice(void);
    Ice(const Ice &cope);
    Ice &operator=(const Ice &cope);
    AMateria *clone(void) const;
    void use(ICharacter &target);
};

#endif
