#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
    std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &cope);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cope);
    void execute(Bureaucrat const &executor) const;
};

#endif
