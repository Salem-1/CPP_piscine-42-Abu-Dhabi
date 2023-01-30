/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:52:17 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/22 14:48:10 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	Fixed const c( Fixed( 5.05f ) / Fixed( 2 ) );
	std::cout << Fixed::max( a, b ) << std::endl;
	// Fixed  b(10); 
	// Fixed  c(42.42f); 
	// Fixed a (b + c);
	// Fixed d (b - c);
	// Fixed e (b * c);
	// Fixed f (c / b);
	// std::cout << "comparing min(c, b) = " << Fixed::min(c, b) << std::endl;
	// std::cout << "comparing max(c, b) = " << Fixed::max(c, b) << std::endl;
	// std::cout << "b = " << b << " now ++b  = " << ++b <<   std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "a is " << a << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "e is " << e << std::endl;
	// std::cout << "f is " << f << std::endl;
	return 0;
}
/*
	 Fixed  b(10); 
	 Fixed  c(42.42f); 
	// Fixed a (b + c);
	// Fixed d (b - c);
	// Fixed e (b * c);
	// Fixed f (c / b);
	std::cout << "comparing min(c, b) = " << Fixed::min(c, b) << std::endl;
	std::cout << "comparing max(c, b) = " << Fixed::max(c, b) << std::endl;
	std::cout << "b = " << b << " now ++b  = " << ++b <<   std::endl;
	// Fixed const z( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << "c is " << c << std::endl;
	// std::cout << "a is " << a << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "e is " << e << std::endl;
	// std::cout << "f is " << f << std::endl;
	// std::cout << "z is " << z << std::endl;
	// if (c > b)
	// 	std::cout << "1It works" << std::endl;
	if (b < c)
		std::cout << "2It works" << std::endl;
	// if (c >= b)
	// 	std::cout << "3It works" << std::endl;
	// if (b <= c)
	// 	std::cout << "4It works" << std::endl;
	// if (c != b)
	// 	std::cout << "5It works" << std::endl;
	// if (c == b)
	// 	;
	// else
	// 	std::cout << "6It works" << std::endl;
	return 0;
}
*/

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