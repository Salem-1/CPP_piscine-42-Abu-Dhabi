/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:05:08 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 16:22:34 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Portable.hpp"
int main(void)
{
	int a = 2;
	int b = 3;
	Portable<int>::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << Portable<int>::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << Portable<int>::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	Portable<std::string>::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << Portable<std::string>::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << Portable<std::string>::max( c, d ) << std::endl;
	return 0;
}