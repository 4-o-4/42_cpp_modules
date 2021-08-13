#include <iostream>
#include "iter.hpp"

int main() {
    int arr[] = {6, 4, 1, 3, 7};
    iter(arr, sizeof(arr) / sizeof(*arr), print);

    std::cout << "\n-----------\n" << std::endl;

    double arr1[] = {4.25, 5.37, 8.44, 9.25};
    iter(arr1, sizeof(arr1) / sizeof(*arr1), print);

    std::cout << "\n-----------\n" << std::endl;

    std::string arr2[] = {"str_1", "str_2", "str_3"};
    iter(arr2, sizeof(arr2) / sizeof(*arr2), print);

    return 0;
}
