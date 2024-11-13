/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:00:41 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 15:44:14 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << HRED << name << " Destroyed" << RESET <<std::endl;
}

void Zombie::announce()
{
	std::cout << HYEL << name << RESET << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

