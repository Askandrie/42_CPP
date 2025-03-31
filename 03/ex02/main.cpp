/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:21:44 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 14:41:35 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << BHGRE << "\t\t### TESTING CLAPTRAP ###\n"
	          << RESET << std::endl;
	{
		ClapTrap ct_a;
		ClapTrap ct_b("Hachi");

		ct_a.displayStats();
		ct_b.displayStats();

		ct_a.attack("Red Sun");
		ct_a.takeDamage(10);
		ct_a.displayStats();
		ct_a.takeDamage(10);
		ct_a.beRepaired(5);
		ct_a.attack("Akina");
		ct_a.beRepaired(5);
		ct_a.displayStats();
		ct_b.beRepaired(4);
		for (int i = 0; i < 10; ++i)
			ct_b.attack("GTR");
		ct_b.beRepaired(4);
		ct_b.displayStats();
	}
	std::cout << BHGRE << "\t\t### TESTING SCAVTRAP ###\n"
	          << RESET << std::endl;
	{
		ScavTrap st_a;
		ScavTrap st_b("Roku");

		st_a.displayStats();
		st_b.displayStats();

		st_a.attack("Cappucino");
		// for (int i = 0; i < 50; i++)
		// 	st_a.attack("Cappucino");
		st_a.beRepaired(22);
		st_a.guardGate();
		st_a.guardGate();
		st_a.takeDamage(21);
		st_a.beRepaired(22);
		st_a.displayStats();
		st_b.attack("EK9");
		st_b.takeDamage(101);
		st_b.takeDamage(15);
		st_b.attack("S2000");
		st_b.displayStats();
	}
	std::cout << BHGRE << "\t\t### TESTING FRAGTRAP ###\n"
	          << RESET << std::endl;
	{
		FragTrap e;
		FragTrap f("FD");

		e.highFivesGuys();
		e.attack("Supra");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("Impreza");
		f.highFivesGuys();
		// for(int i = 0; i < 101; i++)
		// 	f.attack("Impreza");
	}

	return 0;
}