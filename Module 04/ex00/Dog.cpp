#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
}

Dog::Dog(const Dog &cope) : Animal(cope._type) {
}

Dog &Dog::operator=(const Dog &cope) {
    _type = cope._type;
    return *this;
}

Dog::~Dog() {
}

void Dog::makeSound(void) const {
    std::cout << "W-o-o-f" << std::endl;
}
