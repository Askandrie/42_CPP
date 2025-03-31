/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:41:55 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 12:46:49 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define DEFAULT_SCAVTRAP_HIT_POINTS 100
#define DEFAULT_SCAVTRAP_ENERGY_POINTS 50
#define DEFAULT_SCAVTRAP_ATTACK_DAMAGE 20
#define DEFAULT_SCAVTRAP_NAME "ScavTrap"

class ScavTrap : public ClapTrap
{
  private:
	bool gateState;
	/* -------------------------- OrthodoxCanonicalForm
	 * ------------------------- */
  public:
	ScavTrap(std::string name = DEFAULT_SCAVTRAP_NAME);
	ScavTrap(const ScavTrap &origin);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &origin);

	/* -------------------------------- Functions
	 * ------------------------------- */
	void attack(const std::string &target);
	void guardGate();
	void displayStats();
};

#endif