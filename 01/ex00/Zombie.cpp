/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:00:41 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/05 12:23:16 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Hello i am about to launch an all out attack on your house. Sincerely, " << HYEL << name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << HRED << name << " Destroyed" << RESET <<std::endl;
}

void Zombie::announce()
{
	std::cout << HYEL << name << RESET << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
