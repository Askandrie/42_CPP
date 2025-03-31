/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:40:13 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/15 13:54:15 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << BGRN << DEBUG_MSG << std::endl;
}

void Harl::info()
{
	std::cout << BCYN << INFO_MSG << std::endl;
}

void Harl::warning()
{
	std::cout << BYEL << WARNING_MSG << std::endl;
}

void Harl::error()
{
	std::cout << BRED << ERROR_MSG << std::endl;
}

void Harl::complain(std::string level)
{
	ptrFunc     tabfunction[] = {&Harl::debug, &Harl::info, &Harl::warning,
	                             &Harl::error};
	std::string tablevel[]    = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == tablevel[i])
		{
			(this->*tabfunction[i])();
			return;
		}
	}

	std::cout << "INVALID LEVEL" << std::endl;
}
