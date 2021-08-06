#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
}

Cat::Cat(const Cat &cope) : Animal(cope._type) {
}

Cat &Cat::operator=(const Cat &cope) {
    _type = cope._type;
    return *this;
}

Cat::~Cat() {
}

void Cat::makeSound(void) const {
    std::cout << "M-e-o-w" << std::endl;
}
