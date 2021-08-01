#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap robot1("F1");
    new FragTrap("F2");
    robot1.highFivesGuys();
    srand(time(NULL));
    while (robot1.getPoints() > 0) {
        std::cout << std::endl;
        robot1.takeDamage(rand() % 100 + 1);
        robot1.beRepaired(rand() % 2 + 1);
        robot1.attack("F2");
    }
    return 0;
}
