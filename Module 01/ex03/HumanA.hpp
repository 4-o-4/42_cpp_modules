#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
private:
    std::string _name;
    Weapon &_human;
public:
    HumanA(std::string name, Weapon &club);
    void attack(void);
};

#endif
