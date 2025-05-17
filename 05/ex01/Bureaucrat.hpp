/**
 * @ Author: Askandrie
 * @ Create Time: 2025-03-19 02:34:31
 * @ Modified by: Aska
 * @ Modified time: 2025-04-04 17:15:02
 * @ Description:
 */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

#define DEFAULT_GRADE 150
#define DEFAULT_NAME "Default"

class Form;

class Bureaucrat
{
  private:
	std::string const _name;
	int               _grade;

  public:
	Bureaucrat(std::string const name  = DEFAULT_NAME,
	           int               grade = DEFAULT_GRADE);
	Bureaucrat(int grade);
	Bureaucrat(std::string const name);
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &other);

	std::string getName() const;
	int         getGrade() const;

	bool signForm(Form &form) const;
	void setGrade(int grade);
	void incrementGrade();
	void decrementGrade();

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
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b);

#endif