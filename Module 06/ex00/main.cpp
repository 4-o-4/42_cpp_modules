#include "Convert.hpp"

int main(int argc, char **argv) {
    Convert a(argv[1]);
    if (argc != 2)
        std::cerr << RED << "Error: bad arguments." << END << std::endl;
    else
        a.print();

    return 0;
}
