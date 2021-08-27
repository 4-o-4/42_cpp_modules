#include "span.hpp"

Span::Span(unsigned int n) : _n(n) {
}

Span::Span(const Span &cope) : _n(cope._n) {
    if (!_arr.empty())
        _arr.clear();
    for (unsigned int i = 0; i < cope._n; i++)
        _arr.push_back(cope._arr[i]);
}

Span &Span::operator=(const Span &cope) {
    if (!_arr.empty())
        _arr.clear();
    _n = cope._n;
    for (unsigned int i = 0; i < cope._n; i++)
        _arr.push_back(cope._arr[i]);
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Span &b) {
    std::vector<int>::const_iterator it;
    for (it = b._arr.begin(); it != b._arr.end(); it++)
        out << *it << " ";
    return out;
}

void Span::addNumber(unsigned int i) {
    if (_arr.size() > _n)
        throw "Error";
    _arr.push_back(i);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (_arr.size() + end - begin > _n)
        throw "Error";
    _arr.insert(_arr.begin() + _arr.size(), begin, end);
}

int Span::shortestSpan(void) const {
    if (_arr.size() < 2)
        throw "Error";
    std::vector<int>::const_iterator it;
    std::vector<int>::const_iterator it2;
    it = _arr.begin();
    int i = abs(*it - *(it + 1));
    int j = 0;
    for (; it + 1 != _arr.end(); it++)
        for (it2 = it; it2 + 1 != _arr.end(); it2++)
            if ((j = abs(*it - *(it2 + 1))) < i)
                i = j;
    return i;
}

int Span::longestSpan(void) const {
    if (_arr.size() < 2)
        throw "Error";
    int max = *std::max_element(_arr.begin(), _arr.end());
    int min = *std::min_element(_arr.begin(), _arr.end());
    return max - min;
}
