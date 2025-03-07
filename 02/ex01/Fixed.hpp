/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:50:19 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/07 02:34:03 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#define HBLU "\033[1;34m"
#define HMAG "\033[1;35m"
#define HGRN "\033[1;32m"
#define RED "\033[1;31m"
#define HYEL "\033[1;33m"
#define MAG "\033[0;35m"
#define RESET "\033[0m"


#include <cmath>
#include <iostream>

class Fixed
{
	public:
		Fixed(); // Constructeur par default
		Fixed(const int i); // Constructeur avec argument
		Fixed(const float f); // Constructeur avec argument
		Fixed(const Fixed &origin); // Constructeur par copie

		Fixed &operator=(const Fixed &origin); // Operateur d'affectation par copie
		~Fixed(); // Destructeur
		int		getRawBits();
		void	setRawBits(const int raw);
		int		toInt() const ;
		float	toFloat() const ;
		
	private:
		int					_fixed_point;
		static const int	_fractional_bit = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif