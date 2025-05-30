/**
 * @ Author: Aska
 * @ Create Time: 2025-05-29 22:04:09
 * @ Modified by: Aska
 * @ Modified time: 2025-05-30 02:19:04
 */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	// creation of a string stack
	MutantStack<std::string> mutant_stack_string;
	mutant_stack_string.push("Five");
	mutant_stack_string.push("Seventeen");
	mutant_stack_string.pop();
	mutant_stack_string.push("Three");
	mutant_stack_string.push("Seven hundred thirty-seven");

	// creation of a int stack
	MutantStack<int> mutant_stack;
	mutant_stack.push(5);   // addding 5
	mutant_stack.push(17);  // adding 17
	mutant_stack.pop();     // deleting 17
	mutant_stack.push(3);   // adding 3
	mutant_stack.push(737); // adding 737

	std::cout << std::endl;

	// start working with string stack
	MutantStack<std::string>::iterator s_it = mutant_stack_string.begin();
	MutantStack<std::string>::iterator e_it = mutant_stack_string.end();

	++s_it;
	--s_it;
	std::cout << "String Iterator: ";
	while (s_it != e_it)
	{
		std::cout << *s_it << ", ";
		++s_it;
	}

	std::cout << std::endl << std::endl << "String Stack Information \nSize: " << mutant_stack_string.size() << "\nEmpty: " << (mutant_stack_string.empty() ? "true" : "false") << std::endl;
	mutant_stack_string.pop();
	mutant_stack_string.pop();
	mutant_stack_string.pop();
	std::cout << std::endl << std::endl << " String Stack Information \nSize: " << mutant_stack_string.size() << "\nEmpty: " << (mutant_stack_string.empty() ? "true" : "false") << std::endl;
	// end working with string stack

	std::cout << std::endl << "-------------------------------------------------------------------" << std::endl << std::endl;

	// start working with int stack
	MutantStack<int>::iterator it_s = mutant_stack.begin();
	MutantStack<int>::iterator it_e = mutant_stack.end();

	++it_s;
	--it_s;

	std::cout << "Int Iterator: ";
	while (it_s != it_e)
	{
		std::cout << *it_s << "` ";
		++it_s;
	}

	std::cout << std::endl << std::endl << " Int Stack Information \nSize: " << mutant_stack.size() << "\nEmpty: " << (mutant_stack.empty() ? "true" : "false") << std::endl << std::endl;
	// end working with int stack

	return 0;
}