#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
    std::string _target;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &cope);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &cope);
    void execute(Bureaucrat const &executor) const;
};

#endif
