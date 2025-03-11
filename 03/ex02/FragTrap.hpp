/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:41:55 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 12:46:31 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

#define DEFAULT_FRAGTRAP_HIT_POINTS 100
#define DEFAULT_FRAGTRAP_ENERGY_POINTS 50
#define DEFAULT_FRAGTRAP_ATTACK_DAMAGE 20
#define DEFAULT_FRAGTRAP_NAME "FragTrap"

class FragTrap : public ClapTrap
{
/* -------------------------- OrthodoxCanonicalForm ------------------------- */
    public:
        FragTrap(std::string name = DEFAULT_FRAGTRAP_NAME);
        FragTrap(const FragTrap &origin);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &origin);

/* -------------------------------- Functions ------------------------------- */
        void highFiveGuys();
};

#endif