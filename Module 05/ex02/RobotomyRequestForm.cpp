#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
        : AForm("Robotomy Request", 72, 45), _target(target) {
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cope)
        : AForm(cope), _target(cope._target) {
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cope) {
    _target = cope._target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    AForm::execute(executor);

    srand(time(NULL));
    std::cout << "🛎  D-r-r-r 🛎" << std::endl;
    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Error: " << _target << " has not been robotomized" << std::endl;
};
