/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:40:13 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/05 16:29:21 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << BGRN << "[ DEBUG ]\n"
	          << DEBUG_MSG << RESET << std::endl
	          << std::endl;
}

void Harl::info()
{
	std::cout << BCYN << "[ INFO ]\n"
	          << INFO_MSG << RESET << std::endl
	          << std::endl;
}

void Harl::warning()
{
	std::cout << BYEL << "[ WARNING ]\n"
	          << WARNING_MSG << RESET << std::endl
	          << std::endl;
}

void Harl::error()
{
	std::cout << BRED << "[ ERROR ]\n"
	          << ERROR_MSG << RESET << std::endl
	          << std::endl;
}

void Harl::complain(std::string level)
{
	ptrFunc     tabfunction[] = {&Harl::debug, &Harl::info, &Harl::warning,
	                             &Harl::error};
	std::string tablevel[]    = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int         i             = 0;

	while (level != tablevel[i] && i < 4)
		i++;
	switch (i)
	{
		default:
			std::cout << "INVALID LEVEL" << std::endl;
			break;
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
	}
}
