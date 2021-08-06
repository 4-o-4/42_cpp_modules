#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat(void);
    Cat(const Cat &cope);
    Cat &operator=(const Cat &cope);
    virtual ~Cat();
    void makeSound(void) const;
};

#endif
