#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b) {
    T c(a);
    a = b;
    b = c;
}

template<typename T>
const T &max(const T &a, const T &b) {
    return (a == b || a < b) ? b : a;
}

template<typename T>
const T &min(const T &a, const T &b) {
    return (a == b || a > b) ? b : a;
}

#endif
