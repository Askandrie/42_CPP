/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:21:44 by aska              #+#    #+#             */
/*   Updated: 2025/02/28 16:13:06 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct_a("Hachi");
    ClapTrap ct_b;

    ct_a.displayStats();
    ct_b.displayStats();
    
    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_a.displayStats();

    ct_a.setAttackDamage(4);
    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_b.displayStats();
    
    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_b.displayStats();

    ct_b.beRepaired(2);
    ct_b.displayStats();

    ct_a.setAttackDamage(7);
    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_b.displayStats();

    ct_b.beRepaired(2);
    ct_b.displayStats();

    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_b.displayStats();
    ct_a.displayStats();

    ct_b.attack(ct_a.getName());
    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_a.attack(ct_b.getName());
    ct_b.takeDamage(ct_a.getAttackDamage());
    ct_a.attack(ct_b.getName());
    
    return 0;
}