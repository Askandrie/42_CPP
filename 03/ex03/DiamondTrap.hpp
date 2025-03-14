/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 04:25:25 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 14:49:12 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>

#include "../../Colors.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define DEFAULT_DIAMONDTRAP_NAME "DiamondTrap"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;

    public:
        using FragTrap::hitPoints;
        using FragTrap::attackDamage;
        using ScavTrap::energyPoints;
        using ScavTrap::attack;

        DiamondTrap(std::string name = DEFAULT_DIAMONDTRAP_NAME);
        DiamondTrap(const DiamondTrap &origin);
        ~DiamondTrap();
        DiamondTrap &operator=(const DiamondTrap &origin);

        void attack(const std::string &target);
        void whoAmI();
};

#endif