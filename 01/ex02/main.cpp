/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:08:03 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 17:17:10 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	const char *stringPTR = str.c_str;
	void *stringREF = &str;

}