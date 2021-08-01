#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    setPoints(100);
    setEnergy(100);
    setDamage(30);

    std::cout
    << GREEN << "+" << END
    << " 🎃 " << getName()
    << std::endl;
}

FragTrap::~FragTrap() {
    std::cout
    << RED << "×" << END
    << " 🎃 " << getName()
    << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout
    << "High-five"
    << std::endl;
}
