/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:05:50 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 02:43:41 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << BHBLU "Constructing" RESET << std::endl;
	const Animal	*meta = new Animal();
	std::cout << std::endl;
	std::cout << BHBLU "Testing" RESET << std::endl;

	std::cout << "Animal _type: " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	std::cout << BHBLU "Deconstructing" RESET << std::endl;
	delete meta;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << BHBLU "Constructing" RESET << std::endl;
	const Animal	*catto = new Cat();
	std::cout << std::endl;

	std::cout << BHBLU "Testing" RESET << std::endl;
	std::cout << "Cat _type: " << catto->getType() << std::endl;
	catto->makeSound();
	std::cout << std::endl;

	std::cout << BHBLU "Deconstructing" RESET << std::endl;
	delete catto;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << BHBLU "Constructing" RESET << std::endl;
	const Animal	*doggo = new Dog();
	std::cout << std::endl;
	std::cout << BHBLU "Testing" RESET << std::endl;
	std::cout << "Dog _type: " << doggo->getType() <<std::endl;
	doggo->makeSound();
	std::cout << std::endl;
	std::cout << BHBLU "Deconstructing" RESET << std::endl;
	delete doggo;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << BHBLU "Constructing" RESET << std::endl;
	const WrongAnimal	*wrong_meta = new WrongAnimal();
	std::cout << std::endl;

	std::cout << BHBLU "Testing" RESET << std::endl;
	std::cout << "Animal _type: " << wrong_meta->getType() << std::endl;
	wrong_meta->makeSound();
	std::cout << std::endl;

	std::cout << BHBLU "Deconstructing" RESET << std::endl;
	delete wrong_meta;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << BHBLU "Constructing" RESET << std::endl;
	const WrongAnimal	*wrong_catto = new WrongCat();
	std::cout << std::endl;

	std::cout << BHBLU "Testing" RESET << std::endl;
	std::cout << "WrongCat _type: " << wrong_catto->getType() <<std::endl;
	wrong_catto->makeSound();
	std::cout << std::endl;

	std::cout << BHBLU "Deconstructing" RESET << std::endl;
	delete wrong_catto;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << BHBLU "Constructing" RESET << std::endl;
	const WrongCat	*wrong_catta = new WrongCat();
	std::cout << std::endl;

	std::cout << BHBLU "Testing" RESET << std::endl;
	std::cout << "WrongCat _type: " << wrong_catta->getType() <<std::endl;
	wrong_catta->makeSound();
	std::cout << std::endl;

	std::cout << BHBLU "Deconstructing" RESET << std::endl;
	delete wrong_catta;
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << BHBLU "Constructing" RESET << std::endl;
	const Animal	*doggo1 = new Dog();
	const Animal	*doggo2;

	doggo2 = doggo1;
	std::cout << std::endl;
	std::cout << BHBLU "Testing" RESET << std::endl;
	std::cout << "Doggo1 _type: " << doggo1->getType() <<std::endl;
	std::cout << "Doggo2 _type: " << doggo2->getType() <<std::endl;
	doggo1->makeSound();
	doggo2->makeSound();
	std::cout << std::endl;
	std::cout << BHBLU "Deconstructing" RESET << std::endl;
	delete doggo1;
	std::cout << std::endl;

	return (0);
}