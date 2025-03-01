/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:19:47 by aska              #+#    #+#             */
/*   Updated: 2025/02/28 23:41:34 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include "Colors.hpp"

#define DEFAULT_CLAPTRAP_HIT_POINTS 10
#define DEFAULT_CLAPTRAP_ENERGY_POINTS 10
#define DEFAULT_CLAPTRAP_ATTACK_DAMAGE 0

class	ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
	
/* -------------------------- OrthodoxCanonicalForm ------------------------- */
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &origin);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &origin);

/* -------------------------------- Functions ------------------------------- */
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void displayStats();

/* --------------------------------- Getters -------------------------------- */
		std::string getName() const;
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;

/* --------------------------------- Setters -------------------------------- */
		void setAttackDamage(unsigned int attackDamage);
};

#endif