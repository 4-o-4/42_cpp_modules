#include "Intern.hpp"

AForm *Intern::PPF(std::string const &target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::RRF(std::string const &target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::SCF(std::string const &target) {
    return new ShrubberyCreationForm(target);
}

Intern::action Intern::form[] = {
    &Intern::PPF,
    &Intern::RRF,
    &Intern::SCF
};

AForm *Intern::makeForm(std::string const &name, std::string const &target) const {
    std::string forms[] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
    int i;

    i = sizeof(forms) / sizeof(*forms);
    while (i--) {
        if (forms[i] == name) {
            std::cout << GREEN << "Intern creates " + forms[i] << END << std::endl;
            return form[i](target);
        }
    }
    throw FormNotFoundException(name);
}
