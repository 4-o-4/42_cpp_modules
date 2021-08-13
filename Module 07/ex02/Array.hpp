#ifndef ARRAY_H
#define ARRAY_H

#include <exception>

template<class T>
class Array {
private:
    T *_data;
    unsigned int _n;
public:
    Array() : _data(NULL), _n(0) {};

    Array(unsigned int n) : _data(new T[n]), _n(n) {
    };

    Array(const Array &cope) {
        _data = new T[cope._n];
        _n = cope._n;
        for (unsigned int i = 0; i < _n; i++)
            _data[i] = cope._data[i];
    };

    Array &operator=(const Array &cope) {
        if (_data)
            delete[] _data;
        _data = new T[cope._n];
        _n = cope._n;
        for (unsigned int i = 0; i < _n; i++)
            _data[i] = cope._data[i];
        return *this;
    };

    ~Array() {
        delete[] _data;
    };

    T &operator[](const unsigned int index) {
        if (index < 0 || index >= _n)
            throw IndexException();
        return _data[index];
    };

    unsigned int getSize(void) const {
        return _n;
    };

    class IndexException : public std::exception {
        const char *what() const throw() {
            return "--- Error ---";
        };
    };
};

#endif
