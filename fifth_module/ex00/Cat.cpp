/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:57:09 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/23 21:41:39 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "😹Cat constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &cadesa2)
{
	std::cout << "😹Cat copy constructor called" << std::endl;
	*this = cadesa2;
}

Cat	&Cat::operator= (const Cat &cadesa2)
{
	std::cout << "😹Cat copy assignment operator called" << std::endl;
	if (this != &cadesa2)
	{
		
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "😹Cat Destructor called" << std::endl;
}
void	Cat::makeSound() const
{
	std::cout << "🐈 Mew Mew!" << std::endl;
}