/**
 * @ Author: Aska
 * @ Create Time: 2025-04-01 12:13:34
 * @ Modified by: Aska
 * @ Modified time: 2025-04-24 17:26:54
 */

#include "Form.hpp"
#include "../../colors/Colors.hpp"
#include <iostream>

const char *Form::GradeTooHighException::what() const throw()
{
	return (BYEL "Grade is too high" RESET);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (BYEL "Grade is too low" RESET);
}

Form::Form(int gradeToSign, int gradeToExecute, std::string const name,
           bool isSigned)
    : _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _name(name),
      _isSigned(isSigned)
{
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << HGRE << "Form " << this->_name
	          << " created with grade to sign: " << this->_gradeToSign
	          << ", grade to execute: " << this->_gradeToExecute << RESET
	          << std::endl;
}

Form::Form(Form const &src)
    : _gradeToSign(src.getGradeToSign()),
      _gradeToExecute(src.getGradeToExecute()), _name(src.getName()),
      _isSigned(src.getIsSigned())
{
	std::cout << HGRE << "Form " << this->_name
	          << " created with grade to sign: " << this->_gradeToSign
	          << ", grade to execute: " << this->_gradeToExecute << RESET
	          << std::endl;
}

Form::~Form()
{
	std::cout << HRED << "Form " << this->_name << " destroyed" << RESET
	          << std::endl;
}

Form &Form::operator=(Form const &ori)
{
	if (this != &ori)
	{
		this->_isSigned = ori.getIsSigned();
	}
	return (*this);
}

std::string const Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << "Form " << i.getName() << " is "
	  << (i.getIsSigned() ? "signed" : "not signed") << std::endl;
	return (o);
}