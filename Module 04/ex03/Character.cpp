#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
    int i = 0;
    while (i < MAX_M)
        _m[i++] = NULL;
};

Character::Character(const Character &cope) : _name(cope._name) {
    int i = 0;
    while (i < MAX_M) {
        _m[i] = cope._m[i];
        i++;
    }
};

Character &Character::operator=(const Character &cope) {
    int i = 0;
    while (i < MAX_M) {
        _m[i] = cope._m[i];
        i++;
    }
    return *this;
}

std::string const &Character::getName(void) const {
    return _name;
};

void Character::equip(AMateria *m) {
    int i = 0;
    while (_m[i] != NULL && i < MAX_M)
        i++;
    if (i < MAX_M)
        _m[i] = m;
};

void Character::unequip(int idx) {
    if (0 >= idx && idx < MAX_M)
        _m[idx] = NULL;
};

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < MAX_M && _m[idx])
        _m[idx]->use(target);
};
