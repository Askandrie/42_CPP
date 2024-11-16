/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:50:19 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/16 02:58:31 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "Colors.hpp"

class Fixed
{
	public:
		Fixed(); // Constructeur par default
		Fixed(int fixed_point); // Constructeur par default
		Fixed(const Fixed &origin); // Constructeur par copie
		Fixed &operator=(const Fixed &origin); // Operateur d'affectation par copie
		~Fixed(); // Destructeur
		// Fixed(Fixed &&) noexcept; // Constructeur par deplacement
		// Fixed &operator=(Fixed &&) noexcept; // Operateur d'affectation par deplacement
		int		getRawBits();
		void	setRawBits(const int raw);
		
	private:
		int fixed_point;
		static const int fractional_bit = 8;
};

#endif