#include <iostream>
#include <iomanip>

#define DB 8
#define COL 10

class User {
public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
};

class PhoneBook {
    User users[DB];
public:
    int setUser(int i)
    {
        std::cout << "First name: ";
        std::cin >> users[i].firstName;
        std::cout << "Last name: ";
        std::cin >> users[i].lastName;
        std::cout << "Nickname: ";
        std::cin >> users[i].nickname;
        std::cout << "Phone number: ";
        std::cin >> users[i].phoneNumber;
        std::cout << "Darkest secret: ";
        std::cin >> users[i].darkestSecret;
        return i + 1;
    }

    void printUsers(int i)
    {
        std::cout << "│"
        << std::setw(COL) << i << "│"
        << std::setw(COL) << cutString(users[i].firstName) << "│"
        << std::setw(COL) << cutString(users[i].lastName) << "│"
        << std::setw(COL) << cutString(users[i].nickname) << "│\n";
    }

    std::string cutString(std::string str)
    {
        if (str.length() <= COL)
            return str;
        str.resize(COL - 1);
        return str += '.';
    }
};

static void printCmd( void )
{
    std::cout << "Commands:\n" <<
    "\033[32m" << "ADD " << "\033[0m" << "- add a user\n" <<
    "\033[32m" << "SEARCH " << "\033[0m" << "- search and display a list of contacts\n" <<
    "\033[32m" << "EXIT " << "\033[0m" << "- close the program\n" << std::endl;
}

static void add(PhoneBook &book, int &i)
{
    int j;

    j = i % DB;
    j = book.setUser(j);
    i = i < DB ? j : DB + j;
    std::cout << "\033[32m" << "Done\n" << "\033[0m" << std::endl;
}

static void header( void )
{
    std::cout <<
    "┌──────────┬──────────┬──────────┬──────────┐\n"
    "│     index│first name│ last name│  nickname│\n"
    "├──────────┼──────────┼──────────┼──────────┤\n";
}

static void footer( void )
{
    std::cout <<
    "└──────────┴──────────┴──────────┴──────────┘\n"
    << std::endl;
}

static void search(PhoneBook book, int i)
{
    int index;
    int id;

    header();
    i = i > DB ? DB : i;
    index = 0;
    while (index < i)
        book.printUsers(index++);
    footer();

    std::cout << "Enter index: ";
    std::cin >> id;
    if (id < i)
    {
        header();
        book.printUsers(id);
        footer();
    }
    else
        std::cout << "Error\n" << std::endl;
}

int main()
{
    PhoneBook   book;
    std::string cmd;
    int         flag;
    int         i;

    printCmd();
    flag = 0;
    i = 0;
    while (!flag)
    {
        std::cin >> cmd;
        if (cmd == "ADD")
            add(book, i);
        else if (cmd == "SEARCH")
            search(book, i);
        else if (cmd == "EXIT")
            flag = 1;
        else
            printCmd();
    }
    return 0;
}
