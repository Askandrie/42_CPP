/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:19:47 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 14:49:12 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "../../colors/Colors.hpp"
#include <iostream>
#include <string>

#define DEFAULT_CLAPTRAP_HIT_POINTS 10
#define DEFAULT_CLAPTRAP_ENERGY_POINTS 10
#define DEFAULT_CLAPTRAP_ATTACK_DAMAGE 0

class ClapTrap
{
  protected:
	std::string  name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

	/* -------------------------- OrthodoxCanonicalForm
	 * ------------------------- */
  public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &origin);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &origin);

	/* -------------------------------- Functions
	 * ------------------------------- */
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void displayStats();

	/* --------------------------------- Getters
	 * -------------------------------- */
	std::string  getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;

	/* --------------------------------- Setters
	 * -------------------------------- */
	void setAttackDamage(unsigned int attackDamage);
};

#endif