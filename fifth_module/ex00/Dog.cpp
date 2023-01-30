	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:49:03 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/23 15:56:50 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "🐶Dog constructor called" << std::endl;
	type = "Dog";
}

Dog	&Dog::operator = (const Dog &dog2)
{
	std::cout << "🐶Dog copy assignment operator called" << std::endl;
	if (this != &dog2)
	{
		// *this = dog2;
	}
	return (*this);
}

Dog::Dog(const Dog &dog2)
{
	std::cout << "🐶Dog copy Constructor called" << std::endl;
	*this = dog2;
}
Dog::~Dog()
{
	std::cout << "🐶Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "🐶Woof Woof!" << std::endl;
}