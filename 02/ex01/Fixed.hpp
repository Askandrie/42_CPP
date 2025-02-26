/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:50:19 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/02/26 11:57:24 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "Colors.hpp"

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
		int fixed_point;
		static const int fractional_bit = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif