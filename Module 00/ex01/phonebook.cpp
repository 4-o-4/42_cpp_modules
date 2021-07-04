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
    int setUser(int i)
    {
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

    void printUser(int i)
    {
        std::cout
        << "│" << std::setw(COL) << i + INDEX
        << "│" << std::setw(COL) << cutString(_users[i].firstName)
        << "│" << std::setw(COL) << cutString(_users[i].lastName)
        << "│" << std::setw(COL) << cutString(_users[i].nickname)
        << "│" << std::endl;
    }

    void getUser(int i)
    {
        std::cout << GREEN << "First name: " << END << _users[i].firstName << "\n";
        std::cout << GREEN << "Last name: " << END << _users[i].lastName << "\n";
        std::cout << GREEN << "Nickname: " << END << _users[i].nickname << "\n";
        std::cout << GREEN << "Phone number: " << END << _users[i].phoneNumber << "\n";
        std::cout << GREEN << "Darkest secret: " << END << _users[i].darkestSecret << "\n"
        << std::endl;
    }

    std::string cutString(std::string str)
    {
        if (str.length() <= COL)
            return str;
        str.resize(COL - 1);
        return str += '.';
    }
};

static void printCmd(void)
{
    std::cout << "Commands:\n"
    << GREEN << "ADD"
    << END << " - add a user\n"
    << GREEN << "SEARCH"
    << END << " - search and display a list of contacts\n"
    << GREEN << "EXIT"
    << END << " - close the program\n"
    << std::endl;
}

static void add(PhoneBook &book, int &i)
{
    int j;

    j = i % DB;
    j = book.setUser(j);
    i = i < DB ? j : DB + j;
    std::cout << GREEN << "Done\n" << END << std::endl;
}

static void printHeader(void)
{
    std::cout <<
    "┌──────────┬──────────┬──────────┬──────────┐\n"
    "│     index│first name│ last name│  nickname│\n"
    "├──────────┼──────────┼──────────┼──────────┤\n";
}

static void printFooter(void)
{
    std::cout <<
    "└──────────┴──────────┴──────────┴──────────┘\n"
    << std::endl;
}

static void search(PhoneBook book, int i)
{
    std::string str;
    int         index;
    int         id;

    printHeader();
    i = i > DB ? DB : i;
    index = 0;
    while (index < i)
        book.printUser(index++);
    printFooter();
    std::cout << "Enter index: ";
    std::cin >> str;
    id = atoi(str.c_str()) - INDEX;
    if (id >= 0 && id < i)
        book.getUser(id);
    else
        std::cout << "Error\n" << std::endl;
}

int main()
{
    PhoneBook   book;
    std::string cmd;
    int         flag;
    int         i;

    flag = 0;
    i = 0;
    do {
        if (cmd == "ADD")
            add(book, i);
        else if (cmd == "SEARCH")
            search(book, i);
        else if (cmd == "EXIT")
            flag = 1;
        else
            printCmd();
    } while (!flag && std::cin >> cmd);
    return 0;
}
