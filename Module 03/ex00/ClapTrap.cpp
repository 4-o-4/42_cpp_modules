#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
        : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0) {
    std::cout
    << GREEN << "+ Created:" << END
    << " 🤖 " << _name
    << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout
    << RED << "× Destroyed:" << END
    << " 🤖 " << _name
    << std::endl;
}

void ClapTrap::attack(std::string const &target) {
    std::cout
    << "ClapTrap 🤖 " << _name << " attacks 🤖 " << target
    << ", causing " << _attack_damage << " points of damage!"
    << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hitpoints -= amount;
    _attack_damage = amount - 1;

    std::cout
    << "Damage:" << " 🤖 " << _name
    << RED << " -" << amount << END
    << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    _hitpoints += amount;

    std::cout
    << "Repaired:" << " 🤖 " << _name
    << GREEN << " +" << amount << END
    << std::endl;
}

std::string ClapTrap::getName(void) {
    return _name;
}

int ClapTrap::getPoints(void) {
    return _hitpoints;
}

void ClapTrap::setPoints(int i) {
    _hitpoints = i;
}

void ClapTrap::setEnergy(int i) {
    _energy_points = i;
}

void ClapTrap::setDamage(int i) {
    _attack_damage = i;
}
