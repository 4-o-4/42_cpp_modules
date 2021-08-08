#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
        : AForm("Presidential Pardon", 25, 5), _target(target) {
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cope)
        : AForm(cope), _target(cope._target) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cope) {
    _target = cope._target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    AForm::execute(executor);

    std::cout
    << _target + " has been pardoned by Zafod Beeblebrox"
    << std::endl;
};
