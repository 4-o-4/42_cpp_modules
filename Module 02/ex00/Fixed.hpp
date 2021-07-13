#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define FIXED_POINT_FRACTIONAL_BITS 8

class Fixed {
private:
    int _floating_input;
    static const int fractional_bits = FIXED_POINT_FRACTIONAL_BITS;
public:
    Fixed(int value = 0);
    Fixed(const Fixed &cope);
    Fixed &operator=(const Fixed &cope);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif