/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:19:47 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 14:41:35 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define RESET "\033[0m"
#define BWHT "\033[1;37m"
#define RED "\033[31m"
#define MAG "\033[35m"
#define YEL "\033[33m"
#define GRN "\033[32m"
#define HMAG "\033[0;95m"
#define HBLU "\033[0;94m"
#define BHGRE "\033[1;92m"

#define DEFAULT_CLAPTRAP_HIT_POINTS 10
#define DEFAULT_CLAPTRAP_ENERGY_POINTS 10
#define DEFAULT_CLAPTRAP_ATTACK_DAMAGE 0
#define DEFAULT_NAME "ClapTrap"

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
	ClapTrap(std::string name = DEFAULT_NAME);
	ClapTrap(const ClapTrap &src);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &origin);

	/* -------------------------------- Functions
	 * ------------------------------- */
	bool isAlive() const;
	bool haveEnergy() const;
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