/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:52:53 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/21 13:21:58 by ahsalem          ###   ########.fr       */
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
		Fixed const	operator+ (Fixed const &obj2);
		Fixed const	operator- (Fixed const &obj2);
		Fixed const	operator* (Fixed const &obj2);
		Fixed const	operator/ (Fixed const &obj2);
		bool		operator> (Fixed  const &obj2) const;
		bool		operator< (Fixed  const &obj2) const ;
		bool		operator> (Fixed  const &obj2);
		bool		operator< (Fixed  const &obj2) ;
		bool		operator>= (Fixed const &obj2);
		bool		operator<= (Fixed const &obj2);
		bool		operator== (Fixed const &obj2);
		bool		operator!= (Fixed const &obj2);
		Fixed		operator++ ();
		Fixed		operator-- ();
		Fixed		operator++ (int);
		Fixed		operator-- (int);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat( void ) const;
		int			toInt( void ) const;
		static Fixed	&min(Fixed &point1, Fixed &point2);
		static Fixed	&max(Fixed &point1, Fixed &point2);
		static const Fixed	&min(const Fixed &point1,  const Fixed &point2);
		static const Fixed	&max(const Fixed  &point1, const Fixed  &point2);

	private:
		static const int	n_fraction_bits = 8;
		int					fixed_point_value;
};
std::ostream& operator<< (std::ostream& out, Fixed const &f);
#endif

/*
Add these four public overloaded member functions to your class:

• A static member function min that takes as parameters two references on fixed-point numbers,
 and returns a reference to the smallest one.
• A static member function min that takes as parameters two references to constant fixed-point numbers, 
and returns a reference to the smallest one.
• A static member function max that takes as parameters two references on fixed-point numbers, 
and returns a reference to the greatest one.
• A static member function max that takes as parameters two references to constant fixed-point numbers, 
and returns a reference to the greatest one.
*/


























