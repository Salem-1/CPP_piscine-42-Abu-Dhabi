/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:52:53 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/21 17:07:03 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
#include <algorithm>
class Fixed
{
	public:
		Fixed();
		Fixed(const int int_input);
		Fixed(const float float_input);
		Fixed(const Fixed &fixed);
		Fixed & operator = (const Fixed &fixed);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		static const int	n_fraction_bits = 8;
		int					fixed_point_value;
};

std::ostream& operator<< (std::ostream& out, Fixed const &f);
#endif
