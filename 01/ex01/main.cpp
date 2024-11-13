/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:08:58 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 17:02:02 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* hordeZombie = zombieHorde(10, "Ichi");

	hordeZombie[2].announce();

	delete[] hordeZombie;
	return 0;
}