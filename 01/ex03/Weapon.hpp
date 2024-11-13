/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:52:03 by aska              #+#    #+#             */
/*   Updated: 2024/11/13 23:05:03 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
	private:
		Weapon();
		~Weapon();
		std::string type;
	public:
		std::string& getType();
		void setType(std::string type);
};