#include <iostream>
#include "Zombie.hpp"

int main(void) {
    Zombie *zombie = zombieHorde(5, "DEN_");
    std::cout << "\n" << "Pointer to the first zombie:" << "\n";
    zombie->announce();
    std::cout << std::endl;
    delete[] zombie;
    return 0;
}
