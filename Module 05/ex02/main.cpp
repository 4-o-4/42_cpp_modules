#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define RED "\033[31m"
#define END "\033[0m"

int main() {
    try {
        Bureaucrat bob("bob", 1);

        PresidentialPardonForm ppf("Home");
        bob.signForm(ppf);
        bob.executeForm(ppf);

        std::cout << "\n-----------\n" << std::endl;

        RobotomyRequestForm rrf("Home");
        bob.signForm(rrf);
        bob.executeForm(rrf);

        std::cout << "\n-----------\n" << std::endl;

        ShrubberyCreationForm scf("Home");
         bob.signForm(scf);
        bob.executeForm(scf);
    }
    catch (std::exception &e) {
        std::cerr
        << RED << "Error: "
        << e.what()
        << END << std::endl;
    }

    return 0;
}
