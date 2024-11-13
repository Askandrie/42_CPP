/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:56:22 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 15:42:55 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

const std::string HRED = "\033[0;91m";
const std::string HGRN = "\033[0;92m";
const std::string HYEL = "\033[0;93m";
const std::string RESET = "\033[0m";


class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
		void announce(void);

	private:
		std::string name;
};

#endif