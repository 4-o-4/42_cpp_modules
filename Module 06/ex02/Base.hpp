#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Base {
public:
    virtual ~Base() {};
};

class A : public Base {
public:
    A() { std::cout << "Class: A" << std::endl; };
};

class B : public Base {
public:
    B() { std::cout << "Class: B" << std::endl; };
};

class C : public Base {
public:
    C() { std::cout << "Class: C" << std::endl; };
};

#endif
