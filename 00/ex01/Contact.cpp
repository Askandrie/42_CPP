/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:02:11 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/02/27 11:25:21 by ygaiffie         ###   ########.fr       */
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
	if (FirstName.empty())
	{
		std::cout << BHRED << "No contact found." << RESET << std::endl;
		return ;
	}
	std::cout << HBLU << "\nINDEX\t\t: " << WHT << Index + 1 << std::endl;
	std::cout << HBLU << "First Name\t: " << WHT << FirstName << std::endl;
	std::cout << HBLU << "Last Name\t: " << WHT << LastName << std::endl;
	std::cout << HBLU << "Nickname\t: " << WHT << Nickname << std::endl;
	std::cout << HBLU << "Phone Number\t: " << WHT << PhoneNumber << std::endl;
	std::cout << HBLU << "Secret\t\t: " << WHT << DarkestSecret << RESET << std::endl;
}
