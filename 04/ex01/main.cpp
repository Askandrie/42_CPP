/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:05:50 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 03:08:29 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <cstdlib>

int main()
{
	std::cout << BHBLU "Constructing\033[0m" << std::endl;
	const Animal	*meta[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
		if (meta[i] == NULL)
		{
			std::cerr << "Exiting process now";
			exit(1);
		}
	}
	std::cout << std::endl;

	std::cout << BHBLU "Testing\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		std::cout << "Animal _type: " << YEL << meta[i]->getType() << RESET << std::endl;
		meta[i]->makeSound();
	}
	std::cout << std::endl;

	std::cout << BHBLU "Deconstructing\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
		delete(meta[i]);

//THIS PART IS FOR TESTING DEEP COPY ↓

	std::cout << std::endl << std::endl;
	std::cout << "#### showing that the copy constructor creates a deep copy ####" << std::endl;
	std::cout << std::endl;

	std::cout << BHBLU "Constructing\033[0m" << std::endl;
	// Dog *a = new Dog();
	Cat *a = new Cat();
	if (a == NULL)
	{
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}

	a->setIdea("I have to sniff it", 0);
	a->setIdea("I have to pee on it", 1);
	a->setIdea("I have to sniff it again", 2);
	a->setIdea("some shit", 101);

	// Dog *b = new Dog(*a);
	Cat *b = new Cat(*a);
	if (b == NULL)
	{
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	std::cout << std::endl;

	std::cout << BHBLU "Testing a\033[0m" << std::endl;
	std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
	std::cout << BOLD << a->getIdeas(0) << RESET << std::endl;
	a->printAllIdeas();
	std::cout << std::endl;

	std::cout << BHBLU "Deconstructing a\033[0m" << std::endl;
	delete(a);
	std::cout << std::endl;

	std::cout << BHBLU "Testing b\033[0m" << std::endl;
	std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
	std::cout << BOLD << b->getIdeas(0) << RESET << std::endl;
	std::cout << std::endl;
	b->printAllIdeas();
	std::cout << std::endl;

	std::cout << BHBLU "Deconstructing b\033[0m" << std::endl;
	delete(b);

	return (0);
}