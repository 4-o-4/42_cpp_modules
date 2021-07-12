#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
    Weapon *_human;
    std::string _name;
public:
    HumanB(std::string name);
    void attack(void);
    void setWeapon(Weapon &club);
};

#endif
