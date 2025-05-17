/**
 * @ Author: Aska
 * @ Create Time: 2025-05-01 14:13:18
 * @ Modified by: Aska
 * @ Modified time: 2025-05-04 16:41:30
 */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"

#define SCF_NAME "ShrubberyCreationForm_default"
#define SCF_SIGN_GRADE 145
#define SCF_EXECUTE_GRADE 137

class ShrubberyCreationForm : public AForm
{
  private:
	std::string _target;

  public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &ori);

	void        execute(Bureaucrat const &executor) const;
	std::string getTarget() const;
};

#endif