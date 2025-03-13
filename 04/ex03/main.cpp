/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:58:52 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/13 17:25:47 by ygaiffie         ###   ########.fr       */
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
	IMateriaSource *src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *temp;
	temp = src->createMateria("ice");
	me->equip(temp);
	temp = src->createMateria("cure");
	me->equip(temp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "-----------------" << std::endl;
	std::cout << std::endl;

	Character Morgoth("Morgoth");
	Character frodon("Frodon");
	Character gandalf("Gandalf");

	MateriaSource source;

	source.learnMateria(new Ice());
	source.learnMateria(new Cure());
	source.learnMateria(new Ice());
	source.learnMateria(new Cure());

	AMateria *ice = source.createMateria("ice");
	AMateria *cure = source.createMateria("cure");
	AMateria *cure3 = source.createMateria("cure");

	gandalf.equip(cure);
	gandalf.equip(ice);
	gandalf.equip(cure);
	gandalf.equip(ice);

	gandalf.unequip(0); // cure on the ground
	gandalf.use(0, frodon);
	gandalf.use(1, Morgoth);
	frodon.equip(cure3);

	// Copy constructor //
	std::cout << "-----------------" << std::endl;
	std::cout << "Copy constructor" << std::endl;
	std::cout << "-----------------" << std::endl;
	Character Sauron(Morgoth);
	Character Sam(frodon);
	Sam.use(0, Sauron);
	MateriaSource Angband(source);

	AMateria *ice2 = Angband.createMateria("ice");
	AMateria *cure2 = Angband.createMateria("cure");
	AMateria *fire = Angband.createMateria("fire");

	Sauron.equip(cure2);
	Sauron.equip(ice2);
	Sauron.equip(fire);

	// Sauron = gandalf;
	Sauron.use(0, Morgoth);
	Sauron.use(1, gandalf);
	Sauron.use(2, gandalf);
	Sauron.use(3, Sauron);

	std::cout << "-----------------" << std::endl;
	std::cout << "unequip" << std::endl;
	std::cout << "-----------------" << std::endl;
	frodon.unequip(0);
	frodon.unequip(1);
	frodon.unequip(2);
	frodon.unequip(3);

	std::cout << "-----------------" << std::endl;
	std::cout << "Destructor" << std::endl;
	std::cout << "-----------------" << std::endl;

	// delete materias on the floor //
	delete cure3;
	delete cure;
}
