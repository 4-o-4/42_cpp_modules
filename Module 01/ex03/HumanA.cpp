#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _human(club), _name(name) {
}

void HumanA::attack(void) {
    std::cout << _name << " | " << _human.getType() << std::endl;
}
