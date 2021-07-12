#include "phonebook.hpp"

static void printCmd(void) {
    std::cout << "Commands:\n"
    << GREEN << "ADD"
    << END << " - add a user\n"
    << GREEN << "SEARCH"
    << END << " - search and display a list of contacts\n"
    << GREEN << "EXIT"
    << END << " - close the program\n"
    << std::endl;
}

static void add(PhoneBook &book, int &i) {
    int j;

    j = i % DB;
    j = book.setUser(j);
    i = i < DB ? j : DB + j;
    std::cout << GREEN << "Done\n" << END << std::endl;
}

static void printHeader(void) {
    std::cout <<
    "┌──────────┬──────────┬──────────┬──────────┐\n"
    "│     index│first name│ last name│  nickname│\n"
    "├──────────┼──────────┼──────────┼──────────┤\n";
}

static void printFooter(void) {
    std::cout <<
    "└──────────┴──────────┴──────────┴──────────┘\n"
    << std::endl;
}

static void search(PhoneBook book, int i) {
    std::string str;
    int index;
    int id;

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

int main(void) {
    PhoneBook book;
    std::string cmd;
    int i;

    i = 0;
    do {
        if (cmd == "ADD")
            add(book, i);
        else if (cmd == "SEARCH")
            search(book, i);
        else if (cmd == "EXIT")
            return 0;
        else
            printCmd();
    } while (std::cin >> cmd);
    return 0;
}
