/**
 * @ Author: Aska
 * @ Create Time: 2025-05-01 17:27:19
 * @ Modified by: Aska
 * @ Modified time: 2025-05-04 16:41:26
 */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(RRF_SIGN_GRADE, RRF_EXECUTE_GRADE, RRF_NAME), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(src._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &ori)
{
	if (this != &ori)
	{
		AForm::operator=(ori);
		this->_target = ori._target;
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw AForm::FormAlreadySignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();

	std::time_t currentTime = std::time(0);
	std::srand(static_cast<unsigned int>(currentTime));
	int randomValue = std::rand() % 2;
	if (randomValue == 0)
	{
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	}
	else
	{
		std::cout << this->_target << " robotomy failed." << std::endl;
	}
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &robotomyRequestForm)
{
	os << "RobotomyRequestForm: " << robotomyRequestForm.getName() << ", Target: " << robotomyRequestForm.getTarget() << ", Signed: " << (robotomyRequestForm.getIsSigned() ? "Yes" : "No") << std::endl;
	return os;
}