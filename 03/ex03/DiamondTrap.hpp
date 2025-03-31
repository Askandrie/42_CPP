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

#include "../../colors/Colors.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define DEFAULT_DIAMONDTRAP_NAME "DiamondTrap"

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
	std::string _name;

  public:
	using FragTrap::attackDamage;
	using FragTrap::hitPoints;
	using ScavTrap::attack;
	using ScavTrap::energyPoints;

	DiamondTrap(std::string name = DEFAULT_DIAMONDTRAP_NAME);
	DiamondTrap(const DiamondTrap &origin);
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &origin);

	void attack(const std::string &target);
	void whoAmI();
};

#endif