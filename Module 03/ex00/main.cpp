#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

int main() {
    ClapTrap robot1("C1");
    new ClapTrap("C2");
    srand(time(NULL));
    while (robot1.getPoints() > 0) {
        std::cout << std::endl;
        robot1.takeDamage(rand() % 10 + 1);
        robot1.beRepaired(rand() % 2 + 1);
        robot1.attack("C2");
    }
    return 0;
}
