/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:02:25 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/14 14:49:12 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "../../colors/Colors.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

#define MAX_CONTACTS 8
#define AUTHORIZE_CHARS                                                        \
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_+- "

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();
	void Start();
	void AddContact();
	void SearchContact();
	void Exit();

  private:
	Contact contacts[MAX_CONTACTS];
	int     ContactCount;
	int     ContactIndex;
};

#endif