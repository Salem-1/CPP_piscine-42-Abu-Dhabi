/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 06:23:27 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 09:05:16 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	message;
	std::string	*stringPTR;
	std::string	&stringREF = message;

	stringPTR = &message;
	message = "HI THIS IS BRAIN";
	std::cout << "String address = " << &message << std::endl;
	std::cout << "Ptr address    = " << stringPTR << std::endl;
	std::cout << "Ref address    = " << &stringREF << std::endl;

	std::cout << "\nString value   = " << message << std::endl;
	std::cout << "Ptr value      = " << *stringPTR << std::endl;
	std::cout << "Ref value      = " << stringREF << std::endl;
}



/*
Your program has to print:
• The memory address of the string variable. • The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR. • The value pointed to by stringREF.
*/