#include "Karen.hpp"

void Karen::debug(void) {
    std::cout << "--- Debug ---" << std::endl;
}

void Karen::info(void) {
    std::cout << "--- Info ---" << std::endl;
}

void Karen::warning(void) {
    std::cout << "--- Warning ---" << std::endl;
}

void Karen::error(void) {
    std::cout << "--- Error ---" << std::endl;
}

Karen::action Karen::menu[] = {
    &Karen::debug,
    &Karen::info,
    &Karen::warning,
    &Karen::error
};

void Karen::information(int i) {
    (this->*menu[i])();
}

void Karen::complain(std::string level) {
    std::string menu[] = {"Debug", "Info", "Warning", "Error"};
    int i;

    i = sizeof(menu) / sizeof(*menu);
    while (i--)
        if (menu[i] == level)
            break;
    this->information(i);
    if (i == -1)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
