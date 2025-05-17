/**
 * @ Author: Aska
 * @ Create Time: 2025-04-01 12:13:34
 * @ Modified by: Aska
 * @ Modified time: 2025-05-01 15:21:18
 */

#include "AForm.hpp"
#include "../../colors/Colors.hpp"
#include <iostream>

const char *AForm::GradeTooHighException::what() const throw()
{
	return (BYEL "Grade is too high" RESET);
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return (BYEL "Grade is too low" RESET);
}

const char *AForm::FormAlreadySignedException::what() const throw()
{
	return (BYEL "Form is already signed" RESET);
}

AForm::AForm(int gradeToSign, int gradeToExecute, std::string const name, bool isSigned) : _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _name(name), _isSigned(isSigned)
{
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	std::cout << HGRE << "AForm " << this->_name << " created with grade to sign: " << this->_gradeToSign << ", grade to execute: " << this->_gradeToExecute << RESET << std::endl;
}

AForm::AForm(AForm const &src) : _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()), _name(src.getName()), _isSigned(src.getIsSigned())
{
	std::cout << HGRE << "AForm " << this->_name << " created with grade to sign: " << this->_gradeToSign << ", grade to execute: " << this->_gradeToExecute << RESET << std::endl;
}

AForm::~AForm()
{
	std::cout << HRED << "AForm " << this->_name << " destroyed" << RESET << std::endl;
}

AForm &AForm::operator=(AForm const &ori)
{
	if (this != &ori)
	{
		this->_isSigned = ori.getIsSigned();
	}
	return (*this);
}

std::string const AForm::getName() const
{
	return (this->_name);
}

bool AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	if (this->_isSigned)
		throw AForm::FormAlreadySignedException();
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &o, AForm const &i)
{
	o << "AForm " << i.getName() << " is " << (i.getIsSigned() ? "signed" : "not signed") << std::endl;
	return (o);
}