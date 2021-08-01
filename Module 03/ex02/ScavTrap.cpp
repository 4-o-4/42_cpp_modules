#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    setPoints(100);
    setEnergy(50);
    setDamage(20);

    std::cout
    << GREEN << "+" << END
    << " 👽 " << getName()
    << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout
    << RED << "×" << END
    << " 👽 " << getName()
    << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout
    << "ScavTrap have enterred in Gate keeper mode."
    << std::endl;
}
