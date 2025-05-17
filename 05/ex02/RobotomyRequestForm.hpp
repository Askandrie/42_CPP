/**
 * @ Author: Aska
 * @ Create Time: 2025-05-01 16:50:20
 * @ Modified by: Aska
 * @ Modified time: 2025-05-04 16:41:24
 */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

#define RRF_NAME "RobotomyRequestForm"
#define RRF_SIGN_GRADE 72
#define RRF_EXECUTE_GRADE 45

class RobotomyRequestForm : public AForm
{
  private:
	std::string _target;

  public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &ori);

	void        execute(Bureaucrat const &executor) const;
	std::string getTarget() const;
};

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &robotomyRequestForm);

#endif