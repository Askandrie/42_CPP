/**
 * @ Author: Askandrie
 * @ Create Time: 2025-03-19 02:34:31
 * @ Modified by: Aska
 * @ Modified time: 2025-04-01 04:24:15
 * @ Description:
 */

#include "Bureaucrat.hpp"
#include "../../colors/Colors.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (BYEL "Grade is too high" RESET);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (BYEL "Grade is too low" RESET);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << IR3G5B3 "Bureaucrat constructor "
	          << "" << this->_name << " with grade " << this->_grade << RESET
	          << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _name(DEFAULT_NAME), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << IR3G5B3 "Bureaucrat constructor "
	          << "" << this->_name << " with grade " << this->_grade << RESET
	          << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(DEFAULT_GRADE)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << IR3G5B3 "Bureaucrat constructor "
	          << "" << this->_name << " with grade " << this->_grade << RESET
	          << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
    : _name(other._name), _grade(other._grade)
{
	std::cout << IR3G5B3 "Bureaucrat copy constructor "
	          << "" << this->_name << " with grade " << this->_grade << RESET
	          << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << IR5G3B3 "Bureaucrat destructor "
	          << "" << this->_name << " with grade " << this->_grade << RESET
	          << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
	{
		this->_grade = other._grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << IR3G5B3 "Bureaucrat setGrade "
	          << "" << this->_name << " with grade " << this->_grade << RESET
	          << std::endl;
	this->_grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << IR3G5B3 "Bureaucrat incrementGrade "
	          << "" << this->_name << " with grade " << this->_grade << RESET
	          << std::endl;
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << IR3G5B3 "Bureaucrat decrementGrade "
	          << "" << this->_name << " with grade " << this->_grade << RESET
	          << std::endl;
	this->_grade++;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b)
{
	o << "Bureaucrat " << b.getName() << ", grade " << b.getGrade()
	  << std::endl;
	return o;
}