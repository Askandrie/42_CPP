/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:44:18 by aska              #+#    #+#             */
/*   Updated: 2025/03/07 04:17:44 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed		a;
    std::cout << HYEL "a " RESET "is created" << std::endl;
    std::cout << std::endl;

    
    std::cout << HBLU "## operator++ " RESET << std::endl;
	std::cout << HYEL "a " RESET "\t= " << a << std::endl;
	std::cout << HYEL "++a " RESET "\t= " << ++a << std::endl;
	std::cout << HYEL "a " RESET "\t= " << a << std::endl;
	std::cout << HYEL "a++ " RESET "\t= " << a++ << std::endl;
	std::cout << HYEL "a " RESET "\t= " << a << std::endl;
    std::cout << std::endl;
    
    std::cout << HBLU "## operator-- " RESET << std::endl;
    std::cout << HYEL "a " RESET "\t= " << a << std::endl;
    std::cout << HYEL "--a " RESET "\t= " << --a << std::endl;
    std::cout << HYEL "a " RESET "\t= " << a << std::endl;
    std::cout << HYEL "a-- " RESET "\t= " << a-- << std::endl;
    std::cout << HYEL "a " RESET "\t= " << a << std::endl;
    std::cout << std::endl;
    
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << HYEL "b " RESET "is created with param( Fixed( 5.05f ) * Fixed( 2 ) )" << std::endl;
	std::cout << HYEL "b " RESET "\t= " << b << std::endl;
    std::cout << std::endl;

    Fixed       c;
    std::cout << HYEL "c " RESET "is created" << std::endl;
    std::cout << std::endl;

    std::cout << HBLU "## operator+ " RESET << std::endl;
    c = a + b;
    std::cout << HYEL "a + b " RESET "\t= " << c << std::endl;
    std::cout << std::endl;

    std::cout << HBLU "## operator- " RESET << std::endl;
    c = a - b;
    std::cout << HYEL "a - b " RESET "\t= " << c << std::endl;
    std::cout << std::endl;

    std::cout << HBLU "## operator* " RESET << std::endl;
    c = a * b;
    std::cout << HYEL "a * b " RESET "\t= " << c << std::endl;
    std::cout << std::endl;

    std::cout << HBLU "## operator/ " RESET << std::endl;
    c = a / b;
    std::cout << HYEL "a / b " RESET "\t= " << c << std::endl;
    std::cout << std::endl;

	std::cout << HBLU "Max between a and b = " RESET << Fixed::max( a, b ) << std::endl;
    std::cout << HBLU "Min between a and b = " RESET << Fixed::min( a, b ) << std::endl;
    std::cout << std::endl;

	if (b > 8)
		std::cout << b << " is higher than 8" << std::endl;

	if (b != c)
		std::cout << b << " is not equal to " << c << std::endl;

	return 0;
}
