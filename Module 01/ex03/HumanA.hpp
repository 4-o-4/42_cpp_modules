#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
private:
    Weapon &_human;
    std::string _name;
public:
    HumanA(std::string name, Weapon &club);
    void attack(void);
};

#endif
