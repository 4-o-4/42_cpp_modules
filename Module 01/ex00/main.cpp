#include "Zombie.hpp"

int main(void) {
    Zombie *zombie1 = newZombie("DEN_1");
    Zombie zombie2("DEN_2");
    randomChump("DEN_3");
    delete zombie1;
    return 0;
}
