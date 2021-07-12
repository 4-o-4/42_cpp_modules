#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
}

void HumanB::attack(void) {
    std::cout << _name << " | " << _human->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &club) {
    _human = &club;
}
