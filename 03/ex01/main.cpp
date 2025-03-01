/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:21:44 by aska              #+#    #+#             */
/*   Updated: 2025/03/01 00:56:03 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap st_a("Hachi");
    ScavTrap st_b;

    st_a.displayStats();
    st_b.displayStats();
    
    st_a.attack(st_b.getName());
    st_a.displayStats();

    st_a.attack(st_b.getName());
    st_b.guardGate();
    st_b.displayStats();
    st_b.guardGate();
    
    return 0;
}