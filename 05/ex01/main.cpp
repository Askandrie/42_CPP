/**
 * @ Author: Aska
 * @ Create Time: 2025-03-31 01:23:27
 * @ Modified by: Aska
 * @ Modified time: 2025-04-24 18:51:58
 */

#include "../../colors/Colors.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	{
		print_title("Constructing");
		Bureaucrat *a = new Bureaucrat();
		Form       *b = new Form();
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << *a;
		std::cout << *b;
		try
		{
			b->beSigned(*a);
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << a->getName() << " was not able to sign "
			          << b->getName() << ": " << e.what() << std::endl;
		}
		std::cout << *b;
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------"
	          << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Assistant", 145);
		Bureaucrat *b = new Bureaucrat("CEO", 1);
		Form       *c = new Form(140, 100, "Rent Contract");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << *a;
		std::cout << *b;
		std::cout << *c;

		// Assistant signs the Form
		try
		{
			// c->beSigned(*a);
			a->signForm(*c);
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "\033[33m" << a->getName()
			          << " was not able to sign the Form " << c->getName()
			          << ": " << e.what() << "\033[0m" << std::endl;
		}

		// CEO signs the Form
		// std::cout << *c;
		// try
		// {
		// 	c->beSigned(*b);
		// 	// b->signForm(*c);
		// }
		// catch (Bureaucrat::GradeTooLowException &e)
		// {
		// 	std::cerr << "\033[33m" << b->getName()
		// 	          << " was not able to sign the Form " << c->getName()
		// 	          << ": " << e.what() << "\033[0m" << std::endl;
		// }
		// std::cout << *c;

		// try signing the from again
		b->signForm(*c);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------"
	          << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Form *a = NULL;

		// sign-grade too high
		try
		{
			a = new Form(160, 145);
		}
		catch (Form::GradeTooLowException &e)
		{
			std::cerr << "\033[33mConstructing default failed: " << e.what()
			          << "\033[0m" << std::endl;
		}

		// exec-grade too high
		try
		{
			a = new Form(145, 160);
		}
		catch (Form::GradeTooLowException &e)
		{
			std::cerr << "\033[33mConstructing default failed: " << e.what()
			          << "\033[0m" << std::endl;
		}

		// sign-grade too low
		try
		{
			a = new Form(-15, 145);
		}
		catch (Form::GradeTooHighException &e)
		{
			std::cerr << "\033[33mConstructing default failed: " << e.what()
			          << "\033[0m" << std::endl;
		}

		// exec-grade too low
		try
		{
			a = new Form(145, -15);
		}
		catch (Form::GradeTooHighException &e)
		{
			std::cerr << "\033[33mConstructing default failed: " << e.what()
			          << "\033[0m" << std::endl;
		}

		// Deconstruction to prevent unused variable, in this case will never be
		// called
		if (a != NULL)
		{
			std::cout << std::endl;
			std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
			delete a;
		}
		std::cout << std::endl;
	}
	return (0);
}