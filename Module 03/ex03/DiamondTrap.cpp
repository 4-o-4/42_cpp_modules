#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
        : ClapTrap(name), ScavTrap(name), FragTrap(name) {
    _d_name = name;
    ClapTrap::_name = name.append("_clap_name");
    setPoints(FragTrap::_hitpoints);
    setEnergy(ScavTrap::_energy_points);
    setDamage(FragTrap::_attack_damage);

    std::cout
    << GREEN << "+" << END
    << " 🐼 " << _d_name
    << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout
    << RED << "×" << END
    << " 🐼 " << _d_name
    << std::endl;
}

void DiamondTrap::attack(std::string const &target) {
    std::cout
    << "DiamondTrap 🐼 " << _d_name << " attacks 🐼 " << target
    << ", causing " << _attack_damage << " points of damage!"
    << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount) {
    _hitpoints -= amount;
    _attack_damage = amount - 1;

    std::cout
    << "Damage:" << " 🐼 " << _d_name
    << RED << " -" << amount << END
    << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount) {
    _hitpoints += amount;

    std::cout
    << "Repaired:" << " 🐼 " << _d_name
    << GREEN << " +" << amount << END
    << std::endl;
}

void DiamondTrap::whoAmI(void) {
    std::cout
    << GREEN << "ClapTrap: "
    << ClapTrap::_name
    << "\n"
    << "DiamondTrap: "
    << _d_name << END
    << std::endl;
}
