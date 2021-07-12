#include "Karen.hpp"

int main(int argc, char **argv) {
    Karen karen;

    if (argc != 1)
        karen.complain(argv[1]);
    return (0);
}
