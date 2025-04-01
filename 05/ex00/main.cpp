/**
 * @ Author: Aska
 * @ Create Time: 2025-03-31 01:23:27
 * @ Modified by: Aska
 * @ Modified time: 2025-04-01 04:11:03
 */

#include "../../colors/Colors.hpp"
#include "Bureaucrat.hpp"

static void print_title(std::string title)
{
	std::cout << std::endl
	          << WHI "-------------------------------------------------------"
	          << std::endl
	          << BHBLU << title << RESET << std::endl
	          << WHI "-------------------------------------------------------"
	          << RESET << std::endl
	          << std::endl;
}

int main(void)
{
	print_title("Scope 1");
	{
		print_title("Constructing");
		Bureaucrat *a = new Bureaucrat();

		print_title("Testing");
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

		print_title("Deconstructing");
		delete a;
	}
	print_title("Scope 2");
	{
		print_title("Constructing");
		Bureaucrat *a = new Bureaucrat(1);

		print_title("Testing");
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

		print_title("Deconstructing");
		delete a;
	}
	print_title("Scope 3");
	{
		print_title("Constructing");
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

		print_title("Testing");
		if (a != NULL)
		{
			print_title("Deconstructing");
			delete a;
		}
	}
	print_title("Scope 4");
	{
		print_title("Constructing");
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

		print_title("Testing");
		if (a != NULL)
		{
			print_title("Deconstructing");
			delete a;
		}
		std::cout << std::endl;
	}
	print_title("Scope 5");
	{
		print_title("Constructing A");
		Bureaucrat *a = new Bureaucrat("Akira Yamaoka", 120);

		print_title("Testing A");
		a->decrementGrade();
		std::cout << *a << std::endl;

		print_title("Constructing B");
		Bureaucrat *b = new Bureaucrat(*a);

		print_title("Deconstructing A");
		delete a;

		print_title("Testing B");
		std::cout << *b << std::endl;
		b->decrementGrade();
		std::cout << *b << std::endl;

		print_title("Deconstructing B");
		delete b;
	}
}