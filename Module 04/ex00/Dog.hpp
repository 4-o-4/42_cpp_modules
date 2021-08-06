#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog(void);
    Dog(const Dog &cope);
    Dog &operator=(const Dog &cope);
    virtual ~Dog();
    void makeSound(void) const;
};

#endif
