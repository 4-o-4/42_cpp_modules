#include "Form.hpp"

#define RED "\033[31m"
#define END "\033[0m"

int main() {
    try {
        Bureaucrat bob("bob", 7);
        Form f("Google", 10, 10);
        bob.signForm(f);

        Form ff("Slack", 5, 10);
        bob.signForm(ff);
    }
    catch (std::exception &e) {
        std::cerr
        << RED << "Error: "
        << e.what()
        << END << std::endl;
    }

    return 0;
}
