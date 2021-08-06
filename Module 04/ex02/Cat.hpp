#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain *_brain;
public:
    Cat(void);
    Cat(const Cat &cope);
    Cat &operator=(const Cat &cope);
    virtual ~Cat();
    void makeSound(void) const;
    void getBrain(int i) const;
};

#endif
