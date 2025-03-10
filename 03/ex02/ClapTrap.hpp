/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:19:47 by aska              #+#    #+#             */
/*   Updated: 2025/03/10 23:46:30 by aska             ###   ########.fr       */
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
#define DEFAULT_NAME "ClapTrap"

class	ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
	
/* -------------------------- OrthodoxCanonicalForm ------------------------- */
	public:
		ClapTrap(std::string name = DEFAULT_NAME);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &origin);

/* -------------------------------- Functions ------------------------------- */
		bool isAlive() const;
		bool haveEnergy() const;
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