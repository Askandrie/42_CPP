/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:58:52 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/14 12:44:32 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include <string>

int main()
{

	std::cout << BHGRE "\n-----------------" << std::endl;
	std::cout << BHGRE "MAIN SUBJECT" << std::endl;
	std::cout << BHGRE "-----------------\n" << std::endl;

	IMateriaSource *src = new MateriaSource();

	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	ICharacter *me = new Character("me");

	AMateria *temp;
	std::cout << std::endl;

	temp = src->createMateria("ice");
	me->equip(temp);
	std::cout << std::endl;

	temp = src->createMateria("cure");
	me->equip(temp);
	std::cout << std::endl;

	ICharacter *bob = new Character("bob");
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

	std::cout << BHGRE "\n-----------------" << std::endl;
	std::cout << BHGRE "EXTRA SUBJECT" << std::endl;
	std::cout << BHGRE "-----------------\n" << std::endl;

	Character cloud("CLOUD");
	Character yuffie("YUFFIE");
	Character rouge13("ROUGE13");
	std::cout << std::endl;

	MateriaSource source;
	std::cout << std::endl;

	source.learnMateria(new Ice());
	source.learnMateria(new Cure());
	source.learnMateria(new Ice());
	source.learnMateria(new Cure());
	std::cout << std::endl;

	AMateria *ice   = source.createMateria("ice");
	AMateria *cure  = source.createMateria("cure");
	AMateria *cure3 = source.createMateria("cure");
	std::cout << std::endl;

	cloud.equip(cure);
	cloud.equip(ice);
	cloud.equip(cure);
	cloud.equip(ice);
	std::cout << std::endl;

	cloud.unequip(0); // cure on the ground
	cloud.use(0, yuffie);
	cloud.use(1, rouge13);
	yuffie.equip(cure3);
	std::cout << std::endl;

	// Copy constructor //
	std::cout << "-----------------" << std::endl;
	std::cout << "Copy constructor" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << std::endl;

	Character waikiki(rouge13);
	Character pouffie(yuffie);
	std::cout << std::endl;

	pouffie.use(0, waikiki);
	std::cout << std::endl;

	MateriaSource Jenova(source);
	std::cout << std::endl;

	AMateria *ice2  = Jenova.createMateria("ice");
	AMateria *cure2 = Jenova.createMateria("cure");
	AMateria *fire  = Jenova.createMateria("fire");
	std::cout << std::endl;

	waikiki.equip(cure2);
	waikiki.equip(ice2);
	waikiki.equip(fire);
	std::cout << std::endl;

	// waikiki = cloud;
	waikiki.use(0, rouge13);
	waikiki.use(1, cloud);
	waikiki.use(2, cloud);
	waikiki.use(3, waikiki);
	std::cout << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "unequip" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << std::endl;

	yuffie.unequip(0);
	yuffie.unequip(1);
	yuffie.unequip(2);
	yuffie.unequip(3);
	std::cout << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "Destructor" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << std::endl;

	// delete materias on the floor //
	delete cure3;
	delete cure;
}
