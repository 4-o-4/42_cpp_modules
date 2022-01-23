#include <iostream>
#include "Zombie.hpp"

int main(void) {
    const Zombie *zombie = zombieHorde(5, "DEN_");
    std::cout << "\nPointer to the first zombie:" << std::endl;
    zombie->announce();
    std::cout << std::endl;
    delete[] zombie;
    return 0;
}
