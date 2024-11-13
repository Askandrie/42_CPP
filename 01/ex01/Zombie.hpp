/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:56:22 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 17:03:21 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

const std::string HRED = "\033[0;91m";
const std::string HGRN = "\033[0;92m";
const std::string HYEL = "\033[0;93m";
const std::string HBLU = "\033[0;94m";
const std::string HCYN = "\033[0;95m";
const std::string RESET = "\033[0m";


class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void SetName(std::string name);
		void announce(void);

	private:
		std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif