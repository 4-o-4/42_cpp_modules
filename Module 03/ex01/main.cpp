#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"

int main() {
    ScavTrap robot1("S1");
    new ScavTrap("S2");
    robot1.guardGate();
    srand(time(NULL));
    while (robot1.getPoints() > 0) {
        std::cout << std::endl;
        robot1.takeDamage(rand() % 100 + 1);
        robot1.beRepaired(rand() % 2 + 1);
        robot1.attack("S2");
    }
    return 0;
}
