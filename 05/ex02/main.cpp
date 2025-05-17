/**
 * @ Author: Aska
 * @ Create Time: 2025-03-31 01:23:27
 * @ Modified by: Aska
 * @ Modified time: 2025-05-04 17:13:55
 */

#include "../../colors/Colors.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

static void print_title(std::string title)
{
	std::cout << std::endl << WHI "-------------------------------------------------------" << std::endl << BHBLU << title << RESET << std::endl << WHI "-------------------------------------------------------" << RESET << std::endl << std::endl;
}

int main(void)
{
	Bureaucrat b1("JUAN", 150);
	std::cout << b1 << std::cout;
	ShrubberyCreationForm f1("wh");
	f1.execute(b1);
	f1.beSigned(b1);
	b1.signForm(f1);
	f1.execute(b1);
	b1.incrementGrade(149);
	b1.signForm(f1);
	// b1.execute(f1);
	// ROBOTOMY
	RobotomyRequestForm f2("test2");
	f2.execute(b1);
	b1.signForm(f2);
	f2.execute(b1);
	// PRESIDENTIAL
	// PresidentialPardonForm f3("test3");
	f3.execute(b1);
	b1.signForm(f3);
	f3.execute(b1);

	return (0);
}