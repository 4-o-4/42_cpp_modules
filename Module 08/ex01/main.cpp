#include <ctime>
#include "span.hpp"

#define COUNT 5

int main() {
    try {
        srand(time(NULL));
        std::vector<int> arr;
        for (int i = 0; i < COUNT; i++)
            arr.push_back(rand() % 100);

        Span sp = Span(5 + COUNT);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(arr.begin(), arr.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp << std::endl;
    }
    catch (const char *e) {
        std::cerr << e << std::endl;
    }

    return 0;
}
