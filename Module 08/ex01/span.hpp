#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span {
private:
    unsigned int _n;
    std::vector<int> _arr;
public:
    Span(unsigned int n);
    Span(const Span &cope);
    Span &operator=(const Span &cope);
    friend std::ostream &operator<<(std::ostream &out, const Span &b);
    void addNumber(unsigned int i);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan(void) const;
    int longestSpan(void) const;
};

#endif
