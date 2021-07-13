#include "Fixed.hpp"

Fixed::Fixed(int value) : _floating_input(value) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cope) : _floating_input(cope._floating_input) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &cope) {
    std::cout << "Assignation operator called" << std::endl;
    _floating_input = cope.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _floating_input;
}

void Fixed::setRawBits(int const raw) {
    _floating_input = raw;
}
