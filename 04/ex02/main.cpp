/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:05:50 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 14:55:58 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../colors/Colors.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

// int main()
// {
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	AAnimal	*meta[10];
// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i % 2)
// 			meta[i] = new Cat();
// 		else
// 			meta[i] = new Dog();
// 		if (meta[i] == NULL)
// 		{
// 			std::cerr << "Exiting process now";
// 			exit(1);
// 		}
// 	}
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		std::cout << std::endl;
// 		std::cout << "AAnimal _type: " << YEL << meta[i]->getType() << RESET <<
// std::endl; 		meta[i]->makeSound();
// 	}
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	for (int i = 0; i < 10; i++)
// 		delete(meta[i]);

// //THIS PART IS FOR TESTING DEEP COPY ↓

// 	std::cout << std::endl << std::endl;
// 	std::cout << "#### showing that the copy constructor creates a deep copy
// ####" << std::endl; 	std::cout << std::endl;

// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	// Dog *a = new Dog();
// 	Cat *a = new Cat();
// 	if (a == NULL)
// 	{
// 		std::cerr << "Exiting the process now." << std::endl;
// 		exit(1);
// 	}

// 	a->setIdea("I have to sniff it", 0);
// 	a->setIdea("I have to pee on it", 1);
// 	a->setIdea("I have to sniff it again", 2);
// 	a->setIdea("some shit", 101);

// 	// Dog *b = new Dog(*a);
// 	Cat *b = new Cat(*a);
// 	if (b == NULL)
// 	{
// 		std::cerr << "Exiting the process now." << std::endl;
// 		exit(1);
// 	}
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting a\033[0m" << std::endl;
// 	std::cout << "The " << a->getType() << " a has the following ideas: " <<
// std::endl; 	std::cout << BOLD << a->getIdeas(0) << RESET << std::endl;
// 	a->printAllIdeas();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing a\033[0m" << std::endl;
// 	delete(a);
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting b\033[0m" << std::endl;
// 	std::cout << "The " << b->getType() << " b has the following ideas: " <<
// std::endl; 	std::cout << BOLD << b->getIdeas(0) << RESET << std::endl;
// 	std::cout << std::endl;
// 	b->printAllIdeas();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
// 	delete(b);

// 	return (0);
// }

#define NB_ANIMALS 4

inline void printNl(int nb)
{
	for (int i = 0; i < nb; i++)
		std::cout << std::endl;
}

inline void printMess(const std::string message)
{
	std::cout << BR2G2B2 "/// " << message << " ///" RESET << std::endl;
}

void arrayTest(void)
{
	AAnimal *tab[NB_ANIMALS + 1];
	tab[NB_ANIMALS] = NULL;

	printMess("Creating cats");
	for (int i = 0; i < (NB_ANIMALS / 2); i++)
		tab[i] = new Cat();
	printNl(1);

	printMess("Creating dogs");
	for (int i = NB_ANIMALS / 2; i < NB_ANIMALS; i++)
		tab[i] = new Dog();
	printNl(1);

	printMess("All of them making sounds");
	for (int i = 0; i < NB_ANIMALS; i++)
		tab[i]->makeSound();
	printNl(1);

	printMess("Deleting all of them");
	for (int i = 0; i < NB_ANIMALS; i++)
		delete tab[i];
}

inline void testCopyDog(void)
{
	printMess("Creating Dog 1");
	Dog *d1 = new Dog();
	printNl(1);

	printMess("Setting idea LETS EAT and LETS PLAY");
	d1->setIdea("LETS EAT", 0);
	d1->setIdea("LETS PLAY", 1);

	printMess("Print idea of Dog 1");
	std::cout << "[1] " << d1->getIdeas(0) << std::endl;
	std::cout << "[2] " << d1->getIdeas(1) << std::endl;
	printNl(1);

	printMess("Creating a copy of Dog 1 in a Dog 2");
	Dog *d2 = new Dog(*d1);
	printNl(1);

	printMess("Kill Dog 1");
	delete d1;
	printNl(1);

	printMess("Print idea of Dog 2");
	std::cout << "[1] " << d2->getIdeas(0) << std::endl;
	std::cout << "[2] " << d2->getIdeas(1) << std::endl;
	printNl(1);

	printMess("Kill Dog 2");
	delete d2;
	printNl(1);
}

inline void testCopyCat(void)
{
	printMess("Creating Cat 1");
	Cat *d1 = new Cat();
	printNl(1);

	printMess("Setting idea LETS EAT and LETS PLAY");
	d1->setIdea("LETS EAT", 0);
	d1->setIdea("LETS PLAY", 1);

	printMess("Print idea of Cat 1");
	std::cout << "[1] " << d1->getIdeas(0) << std::endl;
	std::cout << "[2] " << d1->getIdeas(1) << std::endl;
	printNl(1);

	printMess("Creating a copy of Cat 1 in a Cat 2");
	Cat *d2 = new Cat(*d1);
	printNl(1);

	printMess("Kill Cat 1");
	delete d1;
	printNl(1);

	printMess("Print idea of Cat 2");
	std::cout << "[1] " << d2->getIdeas(0) << std::endl;
	std::cout << "[2] " << d2->getIdeas(1) << std::endl;
	printNl(1);

	printMess("Creating a Cat 3 and copying Cat 2 in it");
	Cat *d3 = new Cat();
	*d3     = *d2;
	printNl(1);

	printMess("Kill Cat 2");
	delete d2;

	printMess("Print idea of Cat 3");
	std::cout << "[1] " << d3->getIdeas(0) << std::endl;
	std::cout << "[2] " << d3->getIdeas(1) << std::endl;
	printNl(1);

	printMess("Kill Cat 3");
	delete d3;
}

// inline void	testCrashInstance(void)
// {
// 	AAnimal *grizzly = new AAnimal();
// 	grizzly->makeSound();
// 	delete grizzly;
// }

int main(void)
{
	std::cout << CLEAR_SCREEN << std::endl;

	std::cout << BR2G2B2 "##########################################"
	          << std::endl;
	std::cout << "############### ARRAY TEST ###############" << std::endl;
	std::cout << "##########################################" RESET
	          << std::endl;
	arrayTest();
	printNl(2);

	std::cout << BR2G2B2 "##########################################"
	          << std::endl;
	std::cout << "############## COPY TEST DOG #############" << std::endl;
	std::cout << "##########################################" RESET
	          << std::endl;
	testCopyDog();
	printNl(2);

	std::cout << BR2G2B2 "##########################################"
	          << std::endl;
	std::cout << "############## COPY TEST CAT #############" << std::endl;
	std::cout << "##########################################" RESET
	          << std::endl;
	testCopyCat();
	printNl(2);
	/*
	    CETTE FONCTION A ETE AJOUTEE POUR MONTRER QUE LA CLASSE N'EST PAS
	   INSTANCIABLE DESORMAIS SI VOUS DECOMMENTEZ LA FONCTION
	   testCrashInstance() ET SON APPEL DANS LA FONCTION MAIN
	    --> VOUS NE POURREZ PLUS COMPILER
	*/
	// testCrashInstance();
	return (0);
}