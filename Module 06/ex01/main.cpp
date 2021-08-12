#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define END "\033[0m"

struct Data {
    std::string str;
    int num;
    int num1;
};

void print(Data *ptr) {
    std::cout << "String: " << GREEN << ptr->str << END << std::endl;
    std::cout << "Int: " << GREEN << ptr->num << END << std::endl;
    std::cout << "Int1: " << GREEN << ptr->num1 << END << std::endl;
}

uintptr_t serialize(Data *ptr) {
    print(ptr);
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
    Data *ptr1 = new Data;
    ptr1->str = *(reinterpret_cast<std::string *>(raw));
    ptr1->num = *(reinterpret_cast<int *>(raw) + 6);
    ptr1->num1 = *(reinterpret_cast<int *>(raw) + 7);
    print(ptr1);
    delete ptr1;

    std::cout << "\n-----------\n" << std::endl;

    Data *ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}

int main(int argc, char **argv) {
    if (argc != 2)
        std::cerr << RED << "Error: bad arguments." << END << std::endl;
    else {
        Data *ptr = new Data;

        ptr->str = argv[1];
        srand(time(NULL));
        ptr->num = rand() % 100;
        ptr->num1 = rand() % 100;
        uintptr_t i = serialize(ptr);

        std::cout << "\n-----------\n" << std::endl;

        Data *data = deserialize(i);
        print(data);

        delete ptr;
    }

    return 0;
}
