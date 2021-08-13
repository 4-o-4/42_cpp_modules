#ifndef ITER_HPP
#define ITER_HPP

#include <typeinfo>

template<typename T>
void print(T &i) {
    std::cout << typeid(T &).name() << " - " << i << std::endl;
}

template<typename T, typename U>
void iter(T *array, U length, void (*func)(T &)) {
    for (U i = 0; i < length; i++)
        func(array[i]);
}

#endif
