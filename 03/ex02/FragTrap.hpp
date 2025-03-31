/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:41:55 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 18:00:41 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define DEFAULT_FRAGTRAP_HIT_POINTS 100
#define DEFAULT_FRAGTRAP_ENERGY_POINTS 100
#define DEFAULT_FRAGTRAP_ATTACK_DAMAGE 30
#define DEFAULT_FRAGTRAP_NAME "FragTrap"

class FragTrap : public ClapTrap
{
	/* -------------------------- OrthodoxCanonicalForm
	 * ------------------------- */
  public:
	FragTrap(std::string name = DEFAULT_FRAGTRAP_NAME);
	FragTrap(const FragTrap &origin);
	~FragTrap();
	FragTrap &operator=(const FragTrap &origin);

	/* -------------------------------- Functions
	 * ------------------------------- */
	void highFivesGuys();
};

#endif