/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:02:25 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 12:10:12 by ygaiffie         ###   ########.fr       */
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
	void FillContacts();
	void SearchContact();
	void Exit();

  private:
	Contact contacts[MAX_CONTACTS];
	int ContactCount;
	int ContactIndex;
};

#endif