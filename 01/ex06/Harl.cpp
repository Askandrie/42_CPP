/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:40:13 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/15 16:09:38 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << BGRN << "[ DEBUG ]\n" << DEBUG_MSG << std::endl << std::endl;
}

void Harl::info()
{
	std::cout << BCYN << "[ INFO ]\n" << INFO_MSG << std::endl << std::endl;
}

void Harl::warning()
{
	std::cout << BYEL << "[ WARNING ]\n" << WARNING_MSG << std::endl << std::endl;
}

void Harl::error()
{
	std::cout << BRED << "[ ERROR ]\n" << ERROR_MSG << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
	// ptrFunc tabfunction[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string tablevel[] = {"DEBUG", "INFO" ,"WARNING" ,"ERROR"};
	int i = 0;

	while (level != tablevel[i])
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
