/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:52:17 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/22 18:49:45 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int
main(void)
{
	// Fixed a();
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	Fixed a;
	Fixed const b( 10 ); 
	Fixed const c( 42.42f ); 
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
	// int main( void ) 
	// {
	// 	Fixed a(4);
	// 	Fixed e(3.2f);
	// 	return 0;
	// }
	
	/*
	Default constructor called
	Copy constructor called
	Copy assignment operator called // <-- This line may be missing depending on your implementation
	getRawBits member function called
	Default constructor called
	Copy assignment operator called
	getRawBits member function called
	getRawBits member function called
	0
	getRawBits member function called
	0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>
*/