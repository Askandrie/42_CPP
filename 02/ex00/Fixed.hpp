/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:50:19 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/15 18:08:32 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "Colors.hpp"

class Fixed
{
	public:
		Fixed(); // Constructeur par default
		Fixed(Fixed &&) noexcept; // Constructeur par deplacement
		Fixed(const Fixed &); // Constructeur par copie
		Fixed &operator=(Fixed &&); // Operateur d'affectation par deplacement
		Fixed &operator=(const Fixed &); // Operateur d'affectation par copie
		~Fixed(); // Destructeur
		int		getRawBits();
		void	setRawBits(int const raw);
		
	private:
		int fixed_point;
		static const int fractional_bit;
};

#endif