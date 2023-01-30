/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:57:09 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/23 16:59:56 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "🙀WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cadesa2) : WrongAnimal(cadesa2)
{
	std::cout << "🙀WrongCat copy constructor called" << std::endl;
	*this = cadesa2;
}

WrongCat	&WrongCat::operator= (const WrongCat &cadesa2)
{
	std::cout << "🙀WrongCat copy assignment operator called" << std::endl;
	if (this != &cadesa2)
	{
		
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "🙀WrongCat Destructor called" << std::endl;
}
