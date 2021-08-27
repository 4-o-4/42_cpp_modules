#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

template<typename T>
void easyfind(const T &arr, int i) {
    try {
        typename T::const_iterator it;
        it = std::find(arr.begin(), arr.end(), i);
        if (it == arr.end())
            throw "Element not found in myvector";
        std::cout << "Element found in myvector: " << *it << std::endl;
    }
    catch (const char *e) {
        std::cerr << e << std::endl;
    }
};

#endif
