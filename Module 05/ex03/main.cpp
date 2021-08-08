#include "Intern.hpp"

#define RED "\033[31m"
#define END "\033[0m"

int main() {
    try {
        Intern someRandomIntern;
        AForm *ppf;

        ppf = someRandomIntern.makeForm("Presidential Pardon", "Home");
        Bureaucrat bob("bob", 1);
        bob.signForm(*ppf);
        bob.executeForm(*ppf);
        delete ppf;

        std::cout << "\n-----------\n" << std::endl;

        ppf = someRandomIntern.makeForm("RobotomyRequest", "Home");
        bob.signForm(*ppf);
        bob.executeForm(*ppf);
        delete ppf;
    }
    catch (std::exception &e) {
        std::cerr
        << RED << "Error: "
        << e.what()
        << END << std::endl;
    }

    return 0;
}
