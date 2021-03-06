#include "Fixed.hpp"

Fixed::Fixed(void) : _floating_input(0) {

}

Fixed::Fixed(int value) : _floating_input(value << fractional_bits) {

}

Fixed::Fixed(float value) : _floating_input(round(value * (1 << fractional_bits))) {

}

Fixed::Fixed(const Fixed &cope) : _floating_input(cope._floating_input) {
    *this = cope;
}

Fixed &Fixed::operator=(const Fixed &cope) {
    _floating_input = cope._floating_input;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    return out << fixed.toFloat();
}

int Fixed::getRawBits(void) const {
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

float operator*(const Fixed &f1, const Fixed &f2) {
    return f1.toFloat() * f2.toFloat();
}

float operator/(const Fixed &f1, const Fixed &f2) {
    return f1.toFloat() / f2.toFloat();
}

float operator+(const Fixed &f1, const Fixed &f2) {
    return f1.toFloat() + f2.toFloat();
}
float operator-(const Fixed &f1, const Fixed &f2) {
    return f1.toFloat() - f2.toFloat();
}

bool operator>(const Fixed &f1, const Fixed &f2) {
    return f1._floating_input > f2._floating_input;
}

bool operator>=(const Fixed &f1, const Fixed &f2) {
    return f1._floating_input >= f2._floating_input;
}

bool operator<(const Fixed &f1, const Fixed &f2) {
    return f1._floating_input < f2._floating_input;
}

bool operator<=(const Fixed &f1, const Fixed &f2) {
    return f1._floating_input <= f2._floating_input;
}

bool operator==(const Fixed &f1, const Fixed &f2) {
    return f1._floating_input == f2._floating_input;
}

bool operator!=(const Fixed &f1, const Fixed &f2) {
    return f1._floating_input != f2._floating_input;
}

Fixed &Fixed::operator++() {
    _floating_input += 1 << fractional_bits;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    _floating_input += 1 << fractional_bits;
    return tmp;
}

Fixed &Fixed::operator--() {
    _floating_input -= 1 << fractional_bits;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    _floating_input -= 1 << fractional_bits;
    return tmp;
}

Fixed Fixed::min(const Fixed &f1, const Fixed &f2) {
    return (f1 > f2) ? f2 : f1;
}

Fixed Fixed::max(const Fixed &f1, const Fixed &f2) {
    return (f1 > f2) ? f1 : f2;
}
