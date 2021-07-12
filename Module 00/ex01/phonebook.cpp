#include "phonebook.hpp"

int PhoneBook::setUser(int i) {
    std::cout << "First name: ";
    std::cin >> _users[i].firstName;
    std::cout << "Last name: ";
    std::cin >> _users[i].lastName;
    std::cout << "Nickname: ";
    std::cin >> _users[i].nickname;
    std::cout << "Phone number: ";
    std::cin >> _users[i].phoneNumber;
    std::cout << "Darkest secret: ";
    std::cin >> _users[i].darkestSecret;
    return i + 1;
}

void PhoneBook::printUser(int i) {
    std::cout
    << "│" << std::setw(COL) << i + INDEX
    << "│" << std::setw(COL) << cutString(_users[i].firstName)
    << "│" << std::setw(COL) << cutString(_users[i].lastName)
    << "│" << std::setw(COL) << cutString(_users[i].nickname)
    << "│" << std::endl;
}

void PhoneBook::getUser(int i) {
    std::cout
    << GREEN << "First name: " << END << _users[i].firstName << "\n"
    << GREEN << "Last name: " << END << _users[i].lastName << "\n"
    << GREEN << "Nickname: " << END << _users[i].nickname << "\n"
    << GREEN << "Phone number: " << END << _users[i].phoneNumber << "\n"
    << GREEN << "Darkest secret: " << END << _users[i].darkestSecret << "\n"
    << std::endl;
}

std::string PhoneBook::cutString(std::string str) {
    if (str.length() <= COL)
        return str;
    str.resize(COL - 1);
    return str += '.';
}
