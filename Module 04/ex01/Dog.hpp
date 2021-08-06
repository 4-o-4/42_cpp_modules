#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain *_brain;
public:
    Dog(void);
    Dog(const Dog &cope);
    Dog &operator=(const Dog &cope);
    virtual ~Dog();
    void makeSound(void) const;
    void getBrain(int i) const;
};

#endif
 