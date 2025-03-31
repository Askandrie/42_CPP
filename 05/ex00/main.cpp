/**
 * @ Author: Askandrie
 * @ Create Time: 2025-03-24 19:13:48
 * @ Modified by: Askandrie
 * @ Modified time: 2025-03-25 21:06:12
 * @ Description:
 */

#include "../../colors/Colors.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	{
		std::cout << BBLU "Constructing" RESET << std::endl;
		Bureaucrat *a = new Bureaucrat();
		std::cout << std::endl;

		std::cout << BHBLU "Testing" RESET << std::endl;
		std::cout << *a << std::endl;

		try
		{
			a->incrementGrade();
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << YEL "Incrementing grade of " << a->getName()
			          << " failed: " << e.what() << RESET << std::endl;
		}

		std::cout << *a << std::endl;

		try
		{
			a->decrementGrade();
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << YEL "Decrementing grade of " << a->getName()
			          << " failed: " << e.what() << RESET << std::endl;
		}

		std::cout << *a << std::endl;

		try
		{
			a->decrementGrade();
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << YEL "Decrementing grade of " << a->getName()
			          << " failed: " << e.what() << RESET << std::endl;
		}

		std::cout << *a << std::endl;
		std::cout << std::endl;

		std::cout << BBLU "Deconstructing" RESET << std::endl;
		delete a;
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------"
	          << std::endl;
	{
		std::cout << std::endl;
		std::cout << BBLU "Constructing" RESET << std::endl;
		Bureaucrat *a = new Bureaucrat(1);
		std::cout << std::endl;
		std::cout << BHBLU "Testing" RESET << std::endl;
		std::cout << *a << std::endl;

		try
		{
			a->decrementGrade();
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << YEL "Decrementing grade of " << a->getName()
			          << " failed: " << e.what() << RESET << std::endl;
		}

		std::cout << *a << std::endl;

		try
		{
			a->incrementGrade();
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << YEL "Incrementing grade of " << a->getName()
			          << " failed: " << e.what() << RESET << std::endl;
		}

		std::cout << *a << std::endl;

		try
		{
			a->incrementGrade();
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << YEL "Incrementing grade of " << a->getName()
			          << " failed: " << e.what() << RESET << std::endl;
		}

		std::cout << *a << std::endl;
		std::cout << std::endl;

		std::cout << BBLU "Deconstructing" RESET << std::endl;
		delete a;
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------"
	          << std::endl;
	{
		std::cout << std::endl;
		std::cout << BBLU "Constructing" RESET << std::endl;
		Bureaucrat *a = NULL;

		try
		{
			a = new Bureaucrat(0);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << YEL "Constructing default failed: " << e.what()
			          << RESET << std::endl;
		}

		if (a != NULL)
		{
			std::cout << std::endl;

			std::cout << BBLU "Deconstructing b" RESET << std::endl;
			delete a;
		}

		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------"
	          << std::endl;
	{
		std::cout << std::endl;
		std::cout << BBLU "Constructing" RESET << std::endl;
		Bureaucrat *a = NULL;

		try
		{
			a = new Bureaucrat(160);
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << YEL "Constructing default failed: " << e.what()
			          << RESET << std::endl;
		}

		if (a != NULL)
		{
			std::cout << std::endl;
			std::cout << BBLU "Deconstructing b" RESET << std::endl;
			delete a;
		}
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------"
	          << std::endl;
	{
		std::cout << std::endl;
		std::cout << BBLU "Constructing" RESET << std::endl;
		Bureaucrat *a = new Bureaucrat("Peter", 120);
		std::cout << std::endl;

		std::cout << BBLU "Testing a" RESET << std::endl;
		std::cout << a << std::endl;

		a->decrementGrade();

		std::cout << a << std::endl;
		std::cout << std::endl;

		std::cout << BBLU "Constructing b" RESET << std::endl;
		Bureaucrat *b = new Bureaucrat(*a);
		std::cout << std::endl;

		std::cout << BBLU "Deconstructing a" RESET << std::endl;
		delete a;
		std::cout << std::endl;

		std::cout << BBLU "Testing b" RESET << std::endl;
		std::cout << b;
		b->decrementGrade();
		std::cout << b;
		std::cout << std::endl;

		std::cout << BBLU "Deconstructing b" RESET << std::endl;
		delete b;

		std::cout << std::endl;
	}
}