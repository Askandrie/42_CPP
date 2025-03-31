/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:56:22 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/13 14:41:35 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

const std::string HRED  = "\033[0;91m";
const std::string HGRE  = "\033[0;92m";
const std::string HYEL  = "\033[0;93m";
const std::string RESET = "\033[0m";

class Zombie
{
  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);

  private:
	std::string name;
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);
#endif