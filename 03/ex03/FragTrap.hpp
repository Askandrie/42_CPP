/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:41:55 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 18:00:22 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include <string>
#include "Colors.hpp"
#include "ClapTrap.hpp"

#define DEFAULT_FRAGTRAP_HIT_POINTS 100
#define DEFAULT_FRAGTRAP_ENERGY_POINTS 100
#define DEFAULT_FRAGTRAP_ATTACK_DAMAGE 30

class FragTrap : virtual public ClapTrap
{
/* -------------------------- OrthodoxCanonicalForm ------------------------- */
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &origin);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &origin);

/* -------------------------------- Functions ------------------------------- */
        void highFivesGuys();
};

#endif