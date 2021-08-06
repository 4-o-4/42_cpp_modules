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
