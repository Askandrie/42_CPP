/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:14:10 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/14 16:20:38 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int printUsage()
{
	std::cout << "Usage: <Filename> <find STR> <replace STR>\n" << std::endl;
	return 1;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return printUsage();
	std::ifstream file(av[1]);
	if (file.is_open())
	{
		std::string filenameReplace = av[1], s1 = av[2], s2 = av[3], line;
		filenameReplace += ".replace";
		std::ofstream fileReplace(filenameReplace.c_str());
		while (std::getline(file, line))
		{
			size_t pos = line.find(s1);
			while (pos != line.npos)
			{
				if (pos != line.npos)
				{
					line.erase(pos, s1.length());
					line.insert(pos, s2);
				}
				pos = line.find(s1);
			}
			fileReplace << line << std::endl;
		}
		file.close();
		std::cout << "DONE" << av[1] << std::endl;
	}
	else
	{
		std::cout << "Failed to open file" << av[1] << std::endl;
		return 1;
	}
	return 0;
}
