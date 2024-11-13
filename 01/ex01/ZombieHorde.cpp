/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:37:54 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 16:57:56 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{

	Zombie *hordeZombie = new Zombie[N];

	for (int i = 0; i != N; i++)
		hordeZombie[i].SetName(name);
	return hordeZombie;
}