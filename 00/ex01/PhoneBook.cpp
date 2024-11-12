/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:02:22 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/12 18:46:01 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	ContactCount = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}
void PhoneBook::Start()
{
	std::cout << BHRED << "\n\tWELCOME TO THE PHONEBOOK !\n" << std::endl;
}
std::string getFinalLine(std::string input)
{
	std::string line;
	std::getline(std::cin, line);
	if (std::cin.eof())
		return (NULL);
	if (line.empty())
	{
		std::cout << RED << input << " cannot be empty." << RESET << std::endl;
		return (NULL);
	}
	if (line.length() > 64)
		line.resize(64);
	if (line.find_first_not_of(AUTHORIZE_CHARS) != std::string::npos)
	{
		std::cout << RED << "Invalid character in " << input << "." << RESET << std::endl;
		return (NULL);
	}
	return (line);
}

void PhoneBook::AddContact()
{
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
	
	if (ContactCount == 8)
		ContactCount = 0;
	std::cout << "First name:\t";
	FirstName = getFinalLine("First name");
	if (FirstName.empty())
		return ;
	std::cout << "\rLast name:\t";
	LastName = getFinalLine("Last name");
	if (LastName.empty())
		return ;
	std::cout << "\rNickname:\t";
	Nickname = getFinalLine("Nickname");
	if (Nickname.empty())
		return ;
	std::cout << "\rPhone number:\t";
	PhoneNumber = getFinalLine("Phone number");
	if (PhoneNumber.empty())
		return ;
	std::cout << "\rSecret:\t";
	DarkestSecret = getFinalLine("Secret");
	if (DarkestSecret.empty())
		return ;
	contacts[ContactCursor++] = Contact(ContactCount, FirstName, LastName,
			Nickname, PhoneNumber, DarkestSecret);
	ContactCount++;
}

void PhoneBook::Exit()
{
	std::cout << std::endl;
	std::cout << BHYEL << "┍━━━━━━»•» 🌸 «•«━┑" << std::endl;
	std::cout << BHYEL << " Have a good day !" << std::endl;
	std::cout << BHYEL << "┕━»•» 🌸 «•«━━━━━━┙" << std::endl;
}

std::string formatColumn(const std::string &text, int width)
{
	if (text.length() > width)
		return (text.substr(0, width - 1) + ".");
	return (text);
}

void	PrintPreviewSearch(Contact contacts[], int ContactCount)
{
	int i = 0;

	std::cout << std::right << std::setw(10) << "Index" << "|"
							<< std::setw(10) << "First Name" << "|" 
							<< std::setw(10) << "Last Name" << "|"
							<< std::setw(10) << "Nickname" << "|" << std::endl;
	
	for (i = 0; i < ContactCount; i++)
	{
		std::cout << std::right << std::setw(10) << contacts[i].GetIndex() << "|"
			<< std::setw(10) << formatColumn(contacts[i].GetFirstName, 10) << "|" 
			<< std::setw(10) << formatColumn(contacts[i].GetLastName, 10) << "|"
			<< std::setw(10) << formatColumn(contacts[i].GetNickname, 10) << "|" << std::endl;
	}
}

void PhoneBook::SearchContact()
{
}