/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:02:23 by aska              #+#    #+#             */
/*   Updated: 2024/11/12 12:34:22 by ygaiffie         ###   ########.fr       */
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
			for (int j = 0; av[i][j]; ++j)
				std::cout << (char)toupper(str[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}