#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain) {
}

Cat::Cat(const Cat &cope) : Animal(cope._type), _brain(new Brain(*cope._brain)) {
}

Cat &Cat::operator=(const Cat &cope) {
    _type = cope._type;
    _brain = new Brain(*cope._brain);
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout << _type;
}

void Cat::makeSound(void) const {
    std::cout << "M-e-o-w" << std::endl;
}

void Cat::getBrain(int i) const {
    std::cout << _brain->getIdea(i) << std::endl;
}
