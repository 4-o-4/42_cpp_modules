#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define FIXED_POINT_FRACTIONAL_BITS 8

class Fixed {
private:
    int _floating_input;
    static const int fractional_bits = FIXED_POINT_FRACTIONAL_BITS;
public:
    Fixed(void);
    Fixed(int value);
    Fixed(float value);
    Fixed(const Fixed &cope);
    Fixed &operator=(const Fixed &cope);

    float operator*(const Fixed &f) const;
    float operator/(const Fixed &f) const;
    float operator+(const Fixed &f) const;
    float operator-(const Fixed &f) const;

    bool operator>(const Fixed &f) const;
    bool operator>=(const Fixed &f) const;
    bool operator<(const Fixed &f) const;
    bool operator<=(const Fixed &f) const;
    bool operator==(const Fixed &f) const;
    bool operator!=(const Fixed &f) const;

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    static Fixed min(const Fixed &f1, const Fixed &f2);
    static Fixed max(const Fixed &f1, const Fixed &f2);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif