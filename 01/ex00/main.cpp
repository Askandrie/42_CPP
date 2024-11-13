/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:08:58 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 16:00:07 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie("Hachi");
	zombie.announce();

	randomChump("Roku");

	Zombie *zombie1 = newZombie("Nana");
	zombie1->announce();

	delete zombie1;
	return 1;
	
}