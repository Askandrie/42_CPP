/**
 * @ Author: Aska
 * @ Create Time: 2025-04-01 04:38:40
 * @ Modified by: Aska
 * @ Modified time: 2025-05-01 17:30:36
 */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

#include <exception>
#include <ostream>
#include <string>

#define DEFAULT_NAME "Default"
#define DEFAULT_SIGNED false
#define DEFAULT_GRADE_TO_SIGN 150
#define DEFAULT_GRADE_TO_EXECUTE 150

class AForm
{
  private:
	int const         _gradeToSign;
	int const         _gradeToExecute;
	std::string const _name;
	bool              _isSigned;

  public:
	// Constructors and Destructor
	AForm(int gradeToSign = DEFAULT_GRADE_TO_SIGN, int gradeToExecute = DEFAULT_GRADE_TO_EXECUTE, std::string const name = DEFAULT_NAME, bool isSigned = DEFAULT_SIGNED);
	AForm(AForm const &src);
	~AForm();

	// Operators
	AForm &operator=(AForm const &ori);

	// Getters
	std::string const getName() const;
	bool              getIsSigned() const;
	int               getGradeToSign() const;
	int               getGradeToExecute() const;

	// Public methods
	void beSigned(Bureaucrat const &bureaucrat);
	void execute(Bureaucrat const &executor) const;

	// Exceptions
	class GradeTooHighException : public std::exception
	{
	  public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	  public:
		virtual const char *what() const throw();
	};

	class FormAlreadySignedException : public std::exception
	{
	  public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, AForm const &f);

#endif