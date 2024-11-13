/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:08:03 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 22:25:11 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of str\t\t: " << &str << std::endl;
	std::cout << "Address of stringPTR\t: " << &stringPTR << std::endl;
	std::cout << "Address of stringREF\t: " << &stringREF << std::endl;

	std::cout << "Value of str\t\t: " << str << std::endl;
	std::cout << "Value of stringPTR\t: " << stringPTR << std::endl;
	std::cout << "Value of stringREF\t: " << stringREF << std::endl;

	return 0;
}