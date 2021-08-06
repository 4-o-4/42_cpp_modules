#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;
class AMateria {
protected:
    std::string _type;
public:
    AMateria(std::string const &type);
    AMateria(const AMateria &cope);
    AMateria &operator=(const AMateria &cope);
    virtual ~AMateria();
    std::string const &getType(void) const;
    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter &target);
};

#endif
