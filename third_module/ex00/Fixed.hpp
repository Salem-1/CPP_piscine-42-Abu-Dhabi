/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:52:53 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/19 13:14:08 by ahsalem          ###   ########.fr       */
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
		Fixed(const Fixed &fixed);
		Fixed & operator = (const Fixed &fixed);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		static const int	n_fraction_bits = 8;
		int					fixed_point_value;
};
#endif

/*
To define a fixed point type conceptually, all we need are two parameters:

width of the number representation, and
binary point position within the number
*/

/*
	• A constructor that takes a constant integer as a parameter.
		It converts it to the corresponding fixed-point value. The fractional bits value is initialized to 8 like in exercise 00.
	• A constructor that takes a constant floating-point number as a parameter.
		It converts it to the corresponding fixed-point value. The fractional bits value is initialized to 8 like in exercise 00.
	• A member function float toFloat( void ) const;
		that converts the fixed-point value to a floating-point value.
	• A member function int toInt( void ) const;
		that converts the fixed-point value to an integer value.
And add the following function to the Fixed class files:
	• An overload of the insertion («) operator that inserts a floating-point representation
		of the fixed-point number into the output stream object passed as parameter.A member function void setRawBits( int const raw ); that sets the raw value of the fixed-point number.

	Study notes:
	Accuracy: int n = 2; means n is really equals to 2 and you can use == operation with it
	prercision: (int) 5 / 2 == 4 / 2 both results = 2 which lack percision
*/