#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string _type;
public:
    Animal(void);
    Animal(std::string type);
    Animal(const Animal &cope);
    Animal &operator=(const Animal &cope);
    virtual ~Animal();
    std::string getType(void) const;
    virtual void makeSound(void) const;
    virtual void getBrain(int i) const;
};

#endif
