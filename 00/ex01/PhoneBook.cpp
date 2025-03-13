/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:02:22 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/13 14:41:35 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	ContactCount = ContactIndex = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}
void PhoneBook::Start()
{
	std::cout << BHMAG << "\t\t┍━━━━━━━━━━━━━»•» 💼 «•«━┑" << std::endl;
	std::cout << BHMAG << "\t\t WELCOME TO THE PHONEBOOK" << std::endl;
	std::cout << BHMAG << "\t\t┕━»•» 💼 «•«━━━━━━━━━━━━━┙\n" << RESET << std::endl;
}

void PhoneBook::Exit()
{
	std::cout << std::endl;
	std::cout << HMAG << "\t\t┍━━━━━━»•» 🌸 «•«━┑" << std::endl;
	std::cout << BHWHT << "\t\t Have a good day !" << std::endl;
	std::cout << HMAG << "\t\t┕━»•» 🌸 «•«━━━━━━┙" << RESET << std::endl;
}

std::string getFinalLine(std::string input)
{
	std::string line;
	std::string::iterator it;
	std::getline(std::cin, line);
	if (std::cin.eof())
		return ("");
	if (line.empty())
	{
		std::cout << RED << input << " cannot be empty.\n" << RESET << std::endl;
		return ("");
	}
	if (line.length() > 64)
		line.resize(64);
	for (it = line.begin(); it != line.end()&& isprint(*it); it++)
		;
	if (it != line.end())
	{
		std::cout << RED << "Invalid character in " << input << ".\n" << RESET << std::endl;
		return ("");
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
	
	std::cout << YEL << "First name\t: " << RESET;
	FirstName = getFinalLine("First name");
	if (FirstName.empty())
		return ;
	std::cout << YEL << "Last name\t: " << RESET;
	LastName = getFinalLine("Last name");
	if (LastName.empty())
		return ;
	std::cout << YEL << "Nickname\t: " << RESET;
	Nickname = getFinalLine("Nickname");
	if (Nickname.empty())
		return ;
	std::cout << YEL << "Phone number\t: " << RESET;
	PhoneNumber = getFinalLine("Phone number");
	if (PhoneNumber.empty())
		return ;
	std::cout << YEL << "Secret\t\t: " << RESET;
	DarkestSecret = getFinalLine("Secret");
	if (DarkestSecret.empty())
		return ;
	contacts[ContactIndex] = Contact(ContactIndex, FirstName, LastName,
			Nickname, PhoneNumber, DarkestSecret);
	if (++ContactCount >= MAX_CONTACTS)
	 	ContactCount = MAX_CONTACTS;
	if (++ContactIndex == MAX_CONTACTS)
		ContactIndex = 0;
	std::cout << HGRE << "Contact added successfully.\n" << RESET << std::endl;
}


std::string formatColumn(const std::string &text, long unsigned int width)
{
	if (text.length() > width)
		return (text.substr(0, width - 1) + ".");
	return (text);
}

void	PrintPreviewSearch(Contact contacts[], int ContactCount)
{
	int i = 0;

	std::cout << std::endl;
	std::cout << HWHT << "┍━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━»•» 📒 «•«━┑" << std::endl;
	std::cout << std::right
	<< HBLU << std::setw(10) << "Index" << BWHT << "|"
	<< HBLU << std::setw(10) << "First Name" << BWHT << "|" 
	<< HBLU << std::setw(10) << "Last Name" << BWHT << "|"
	<< HBLU << std::setw(10) << "Nickname" << BWHT << std::endl;
	
	for (i = 0; i < ContactCount; i++)
	{
		std::cout << std::right << RESET
		<< std::setw(10) << contacts[i].GetIndex() + 1 << BWHT << "|" << RESET
		<< std::setw(10) << formatColumn(contacts[i].GetFirstName(), 10) << BWHT << "|" << RESET
		<< std::setw(10) << formatColumn(contacts[i].GetLastName(), 10) << BWHT << "|" << RESET
		<< std::setw(10) << formatColumn(contacts[i].GetNickname(), 10) << BWHT <<RESET << std::endl;
	}
	std::cout << HWHT << "┕━»•» 📒 «•«━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙" << RESET << std::endl;

	std::cout << std::endl;
}

void PhoneBook::SearchContact()
{
	PrintPreviewSearch(contacts, ContactCount);
	if (ContactCount == 0)
		return ;
	
	std::string Index;
	std::cout << YEL << "Enter the index of the contact you want to see: " << RESET;
	std::getline(std::cin, Index);
	if(std::cin.eof())
		return ;
	if (Index.length() > 1 || Index.empty() || Index.find_first_not_of("12345678") != std::string::npos)
	{
		std::cout << RED << "Invalid index.\n" << RESET << std::endl;
		return ;
	}
	else
		contacts[atoi(Index.c_str()) - 1].PrintContact();
	std::cout << std::endl;
}