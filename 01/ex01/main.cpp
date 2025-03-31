/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:08:58 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/05 13:04:19 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie *horde;

	horde = zombieHorde(argc - 1, "Horde Member");
	if (horde == NULL)
		return (EXIT_FAILURE);

	for (int i = 0; i < argc - 1; ++i)
	{
		horde[i].SetName(argv[i + 1]);
		horde[i].announce();
	}

	delete[] horde;
	horde = zombieHorde(0, "Failed");
	return (EXIT_SUCCESS);
}