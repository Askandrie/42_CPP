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

#include "ClapTrap.hpp"

int main()
{
    std::cout << BHGRE "\t\t### TESTING CLAPTRAP ###\n" RESET << std::endl;
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
    
    return 0;
}