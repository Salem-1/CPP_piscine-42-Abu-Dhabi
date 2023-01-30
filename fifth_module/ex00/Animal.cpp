/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:04:29 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/24 01:11:27 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "🐴Animal Constructor called" << std::endl;
	type = "Daaba";
}

Animal::Animal(const Animal &daaba)
{
	std::cout << "🐴Animal copy Constructor called" << std::endl;
	*this = daaba;
}
Animal	&Animal::operator= (const Animal &daaba)
{
	std::cout << "🐴Animal assignment operator called called" << std::endl;
	if (this != &daaba)
	{
		this->type = daaba.type;
	}
	return (*this);
}
Animal::~Animal()
{
	std::cout << "🐴Animal destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
void	Animal::makeSound() const
{
	std::cout << "Awooooooooooo" << std::endl;
}