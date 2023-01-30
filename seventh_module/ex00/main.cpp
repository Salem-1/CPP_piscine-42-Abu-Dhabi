/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:53:13 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/28 16:59:51 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CastStr.hpp"
int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	CastStr	cast_me(argv[1]);
	cast_me.do_casting();
}

// float a = std::stof(convert_me);
//inff, +inff and nanf.
//types to convert to 
//char -------------> if non displayable char given print error message (isprint())
//int		decimal
//float		decimal
//double	decimal
/*
	handle -inff, +inff and nanf. in double and floats
----------------------------------------------------------------
steps:
-----
1-Detect type of the literal passed as parameter
2-Convert from string to it's actual type
3-Convert to the 3 other data types
4-Display result as below
./convert 0
char: Non displayable
int: 0 
float: 0.0f
double: 0.0 ./convert nan

hnalde numeric limits and special value
*/

