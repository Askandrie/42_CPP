/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:02:23 by aska              #+#    #+#             */
/*   Updated: 2025/02/25 16:45:41 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; ++i)
		{
			std::string str = av[i];
			std::string::iterator it;
			for (it = str.begin(); it != str.end(); ++it)
				std::cout << (char)toupper(*it);
		}
		std::cout << std::endl;
	}
	return (0);
}