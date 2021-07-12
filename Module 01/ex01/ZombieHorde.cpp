#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
    Zombie *zombie;

    zombie = new Zombie[N];
    while (N--)
        zombie[N].setZombie(name + std::to_string(N + 1));
    return zombie;
}
