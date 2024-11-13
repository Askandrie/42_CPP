/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:02:15 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 01:27:51 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
		Contact();
		Contact(int index, 
            const std::string& first_name,
            const std::string& last_name,
            const std::string& nickname,
            const std::string& phone_number,
            const std::string& darkest_secret);
		~Contact();
		void PrintContact();
		void PrintPrettyContact();
		int GetIndex();
		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickname();

	private:
		int			Index;
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif