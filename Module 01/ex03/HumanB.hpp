#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon *_human;
public:
    HumanB(std::string name);
    void attack(void);
    void setWeapon(Weapon &club);
};

#endif
