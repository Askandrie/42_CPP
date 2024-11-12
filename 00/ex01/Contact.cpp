/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:02:11 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/12 18:30:17 by ygaiffie         ###   ########.fr       */
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



void Contact::PrintContact(Contact contact)
{
	std::cout << "\nContact " << BYEL << contact.Index << ":" << std::endl;
	std::cout << "First Name: " << BYEL << contact.FirstName << std::endl;
	std::cout << "Last Name: " << BYEL << contact.LastName << std::endl;
	std::cout << "Nickname: " << BYEL << contact.Nickname << std::endl;
	std::cout << "Phone Number: " << BYEL << contact.PhoneNumber << std::endl;
	std::cout << "Secret: " << BYEL << contact.DarkestSecret << std::endl;
}
