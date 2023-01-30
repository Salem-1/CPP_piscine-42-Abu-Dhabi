/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:11:27 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 12:13:23 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

void	C::whoami()
{
	std::cout << "C" << std::endl;
}
bool	C::operator== (Base  *obj2)
{
	if (this == obj2)
		return (true);
	else
		return (false);
};
bool	C::operator== (Base  &obj2)
{
	if (this == &obj2)
		return (true);
	else
		return (false);
};



void	identify(Base* p)
{
	A *tmp_a = dynamic_cast<A *>(p);
	B *tmp_b = dynamic_cast<B *>(p);
	C *tmp_c = dynamic_cast<C *>(p);

	if (tmp_c)
		std::cout << "C" << std::endl;	
	if (tmp_b)
		std::cout << "B" << std::endl;
	if (tmp_a)
		std::cout << "A" << std::endl;
	
}
void	identify(Base& p)
{
	try
	{
		A tmp_a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception& e)
	{
		;
	}
	try
	{
		B tmp_b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception& e)
	{
		;
	}
	try
	{
		C tmp_c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::exception& e)
	{
		;
	}
}
Base	*generate(void)
{
	time_t current_time = time(0);
	int r = static_cast<int>(current_time) % 10;
	
	
	if (r < 3)
	{
		std::cout << "Generating A" << std::endl;
		return (new A);
	}
	else if (r > 7)
	{
		std::cout << "Generating B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Generating C" << std::endl;
		return (new C);
	}
}
