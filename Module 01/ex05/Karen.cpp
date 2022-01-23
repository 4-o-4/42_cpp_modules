#include "Karen.hpp"

Karen::action Karen::menu[] = {
    &Karen::_debug,
    &Karen::_info,
    &Karen::_warning,
    &Karen::_error
};

void Karen::_debug(void) {
    std::cout << "--- Debug ---" << std::endl;
}

void Karen::_info(void) {
    std::cout << "--- Info ---" << std::endl;
}

void Karen::_warning(void) {
    std::cout << "--- Warning ---" << std::endl;
}

void Karen::_error(void) {
    std::cout << "--- Error ---" << std::endl;
}

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
    information(i);
    if (i == -1)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
