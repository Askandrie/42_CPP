/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:55:23 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/05 16:26:20 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "INVALID LEVEL" << std::endl;
		return (1);
	}
	Harl harl;
	harl.complain(argv[1]);
	return EXIT_SUCCESS;
}
