/**
 * @ Author: Askandrie
 * @ Create Time: 2025-03-19 02:34:31
 * @ Modified by: Askandrie
 * @ Modified time: 2025-03-25 18:59:54
 * @ Description:
 */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>

#define DEFAULT_GRADE 150
#define DEFAULT_NAME "Default"

#include <string>

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