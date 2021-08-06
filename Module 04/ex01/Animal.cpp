#include "Animal.hpp"

Animal::Animal(void) {
}

Animal::Animal(std::string type) : _type(type) {
}

Animal::Animal(const Animal &cope) : _type(cope._type) {
}

Animal &Animal::operator=(const Animal &cope) {
    _type = cope._type;
    return *this;
}

Animal::~Animal() {
    std::cout << " | Animal" << std::endl;
}

std::string Animal::getType(void) const {
    return _type;
}

void Animal::makeSound(void) const {
    std::cout << "A-n-i-m-a-l" << std::endl;
}

void Animal::getBrain(int i) const {
    std::cout << "idea-" + std::to_string(i) << std::endl;
}
