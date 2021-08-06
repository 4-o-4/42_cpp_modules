#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain) {
}

Dog::Dog(const Dog &cope) : Animal(cope._type), _brain(new Brain(*cope._brain)) {
}

Dog &Dog::operator=(const Dog &cope) {
    _type = cope._type;
    _brain = new Brain(*cope._brain);
    return *this;
}

Dog::~Dog() {
    delete _brain;
    std::cout << _type;
}

void Dog::makeSound(void) const {
    std::cout << "W-o-o-f" << std::endl;
}

void Dog::getBrain(int i) const {
    std::cout << _brain->getIdea(i) << std::endl;
}
