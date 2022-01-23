#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club)
    : _name(name), _human(club) {
}

void HumanA::attack(void) {
    std::cout << _name << " | " << _human.getType() << std::endl;
}
