/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:52:53 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/18 10:26:32 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed(){};
		&Fixed(){};
		&Fixed(int something){};
		~Fixed(){};
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		static const int	fraction_bits;
		int					fixed_point;
}
#endif

/**
	Private members:
		An integer to store the fixed-point number value.
		A static constant integer to store the number of fractional bits. Its value
	ll always be the integer literal 8. 
	• Public members:
	A default constructor that initializes the fixed-point number value to 0.
	A copy constructor.
	A copy assignment operator overload.
	A destructor.
	A member function int getRawBits( void ) const; that returns the raw value of the fixed-point value.
	A member function void setRawBits( int const raw ); that sets the raw value of the fixed-point number.
*/