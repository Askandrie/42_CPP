/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:44:18 by aska              #+#    #+#             */
/*   Updated: 2025/03/07 02:38:14 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    a = Fixed(1234.4321f);
    std::cout << HYEL "a" RESET " is " << a << std::endl;
    std::cout << HYEL "b" RESET " is " << b << std::endl;
    std::cout << HYEL "c" RESET " is " << c << std::endl;
    std::cout << HYEL "d" RESET " is " << d << std::endl;
    std::cout << HYEL "a" RESET " is " << a.toInt() << " as integer" << std::endl;
    std::cout << HYEL "b" RESET " is " << b.toInt() << " as integer" << std::endl;
    std::cout << HYEL "c" RESET " is " << c.toInt() << " as integer" << std::endl;
    std::cout << HYEL "d" RESET " is " << d.toInt() << " as integer" << std::endl;
    return 0;
}