/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:54:19 by aska              #+#    #+#             */
/*   Updated: 2024/11/12 17:39:26 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int main()
{
	PhoneBook PhoneBook;

	PhoneBook.Start();
	while (1)
	{
		std::string command;
		std::cout << "Usage:\t" << BOLD << "ADD, SEARCH, EXIT" << std::endl;
		std::cout <<RESET << "Enter a command:\t";
		std::getline(std::cin, command);
		if (command == "ADD")
			PhoneBook.AddContact();
		else if (command == "SEARCH")
			PhoneBook.SearchContact();
		else if (command == "EXIT")
		{
			PhoneBook.Exit();
			break;
		}
		else
			std::cout << RED <<"Invalid command." << RESET << std::endl;
	}
	return 0;
}