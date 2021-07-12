#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

#define DB 8
#define COL 10
#define INDEX 1
#define GREEN "\033[32m"
#define END "\033[0m"

class User {
public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
};

class PhoneBook {
private:
    User _users[DB];
public:
    int setUser(int i);
    void printUser(int i);
    void getUser(int i);
    std::string cutString(std::string str);
};

#endif
