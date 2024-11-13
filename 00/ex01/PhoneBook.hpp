/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:02:25 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 01:36:34 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Colors.hpp"
# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

# define MAX_CONTACTS 8
# define AUTHORIZE_CHARS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_+- "
class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();
	void Start();
	void AddContact();
	void SearchContact(std::string command);
	void Exit();

  private:
	Contact contacts[MAX_CONTACTS];
	int ContactCount;
};

#endif