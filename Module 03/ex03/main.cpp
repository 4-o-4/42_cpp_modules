#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap robot1("D1");
    new DiamondTrap("D2");
    robot1.whoAmI();
    srand(time(NULL));
    while (robot1.getPoints() > 0) {
        std::cout << std::endl;
        robot1.takeDamage(rand() % 100 + 1);
        robot1.beRepaired(rand() % 2 + 1);
        robot1.attack("D2");
    }
    return 0;
}
