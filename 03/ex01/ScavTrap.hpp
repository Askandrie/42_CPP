/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:41:55 by aska              #+#    #+#             */
/*   Updated: 2025/03/01 01:38:48 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "Colors.hpp"
#include "ClapTrap.hpp"

#define DEFAULT_SCAVTRAP_HIT_POINTS 100
#define DEFAULT_SCAVTRAP_ENERGY_POINTS 50
#define DEFAULT_SCAVTRAP_ATTACK_DAMAGE 20

class ScavTrap : public ClapTrap
{
    private:
        bool gateState;
/* -------------------------- OrthodoxCanonicalForm ------------------------- */
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &origin);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &origin);

/* -------------------------------- Functions ------------------------------- */
        void attack(const std::string &target);
        void guardGate();
        void displayStats();
};

#endif