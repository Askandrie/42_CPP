/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:02:11 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 01:46:14 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Colors.hpp"

Contact::Contact():	
			Index(0),
			FirstName(""),
			LastName(""),
			Nickname(""),
			PhoneNumber(""),
			DarkestSecret("") {}

Contact::Contact(int index, 
            const std::string& first_name,
            const std::string& last_name,
            const std::string& nickname,
            const std::string& phone_number,
            const std::string& darkest_secret):
				Index(index),
        		FirstName(first_name),
        		LastName(last_name),
        		Nickname(nickname),
        		PhoneNumber(phone_number),
        		DarkestSecret(darkest_secret) {}

Contact::~Contact() {}

int Contact::GetIndex()
{
	return (Index);
}

std::string Contact::GetFirstName()
{
	return (FirstName);
}

std::string Contact::GetLastName()
{
	return (LastName);
}

std::string Contact::GetNickname()
{
	return (Nickname);
}

void Contact::PrintContact()
{
	std::cout << HBLU << "\nINDEX\t\t: " << WHT << Index + 1 << std::endl;
	std::cout << HBLU << "First Name\t: " << WHT << FirstName << std::endl;
	std::cout << HBLU << "Last Name\t: " << WHT << LastName << std::endl;
	std::cout << HBLU << "Nickname\t: " << WHT << Nickname << std::endl;
	std::cout << HBLU << "Phone Number\t: " << WHT << PhoneNumber << std::endl;
	std::cout << HBLU << "Secret\t\t: " << WHT << DarkestSecret << RESET << std::endl;
}

void Contact::PrintPrettyContact()
{
	std::cout << HBLU << "\n\tNAME\t" << HWHT << ": " << FirstName << " " << LastName 
	<< HBLU << " A.K.A " << BHRED << "\"" << Nickname << "\"" << RESET << std::endl << "\n\t 📱\t: "
	<< HWHT << PhoneNumber << RESET << std::endl << "\n\t 🤫\t: " << SECRET << DarkestSecret
	<< RESET << std::endl;
}