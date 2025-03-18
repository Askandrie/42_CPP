/*
 * File: Bureaucrat.cpp
 * Project: ex00
 * Created Date: Th Jan 1970 by Aska | monMorency
 * Last Modified: Tue Mar 18 2025 by Aska | monMorency
 * License: <<license>>
 * Company: 42Angouleme
 * -----
 */

#include "Bureaucrat.hpp"

GradeTooHighException::GradeTooHighException() {}
GradeTooHighException::~GradeTooHighException() throw() {}
const char *GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

GradeTooLowException::GradeTooLowException() {}
GradeTooLowException::~GradeTooLowException() throw() {}
const char *GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}