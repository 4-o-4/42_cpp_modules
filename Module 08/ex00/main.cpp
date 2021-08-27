#include "easyfind.hpp"

int main() {
    int ints[] = { 16, 2, 77, 29 };

    std::vector<int> arr(ints, ints + sizeof(ints)/sizeof(int));
    std::array<int, 4> arr1 = {16, 2, 77, 29};
    easyfind(arr, 2);
    easyfind(arr1, 3);

    std::cout << "\n-----------\n" << std::endl;

    easyfind(arr, 24);
    easyfind(arr1, 2);

    return 0;
}
