/*
 * Filename: /nfs/homes/ygaiffie/Documents/42_CPP/05/ex00/Bureaucrat.hpp
 * Path: /nfs/homes/ygaiffie/Documents/42_CPP/05/ex00
 * Created Date: Thursday, January 1st 1970, 1:00:00 am
 * Author: Yohann Gaiffier
 *
 * Copyright (c) 2025 Your Company
 */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define DEFAULT_GRADE 150
#define DEFAULT_NAME "Default"

#include <string>

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

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;

public:
	Bureaucrat(	std::string	name = DEFAULT_NAME,
				int grade = DEFAULT_GRADE);
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &other);

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	class GradeTooHighException;
	class GradeTooLowException;
};

#endif