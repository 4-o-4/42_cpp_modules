#include "Fixed.hpp"

Fixed::Fixed(void) : _floating_input(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value) : _floating_input(value << fractional_bits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value) : _floating_input(round(value * (1 << fractional_bits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cope) : _floating_input(cope._floating_input) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cope;
}

Fixed &Fixed::operator=(const Fixed &cope) {
    std::cout << "Assignation operator called" << std::endl;
    _floating_input = cope._floating_input;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    return out << fixed.toFloat();
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _floating_input;
}

void Fixed::setRawBits(int const raw) {
    _floating_input = raw;
}

float Fixed::toFloat(void) const {
    return (float)_floating_input / (1 << fractional_bits);
}

int Fixed::toInt(void) const {
    return _floating_input >> fractional_bits;
}
