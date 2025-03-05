/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:32:40 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/05 14:01:35 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

const std::string DEBUG_MSG		= "\"Je vais te tuer jusqu'à ce que tu sois mort.\""; // Jerry Haleva dans Hot Shots ! 2 (1993)
const std::string INFO_MSG		= "\"A chaque fois que j'écoute Wagner, ça me donne envie d'envahir la Pologne.\""; // Woody Allen dans Meurtre mystérieux à Manhattan (1993).
const std::string WARNING_MSG 	= "\"Tu aimes les films de gladiateurs ? Et tu as déjà visité une prison turque ?\""; // Y a-t-il un pilote dans l'avion ? (1980)
const std::string ERROR_MSG		= "\"- Vous voulez un whisky ?\n- Juste un doigt.\n- Vous voulez pas un whisky d'abord ?\""; // Chabat à Lauby dans La Cité de la peur (1994)

const std::string BRED			= "\033[1;31m";
const std::string BGRN			= "\033[1;32m";
const std::string BYEL			= "\033[1;33m";
const std::string BCYN			= "\033[1;36m";
const std::string RESET 		= "\033[0m";

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
		typedef void (Harl::*ptrFunc)();

	private:
		void debug();
		void info();
		void warning();
		void error();
};

#endif