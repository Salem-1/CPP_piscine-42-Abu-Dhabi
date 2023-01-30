/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:04:29 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/23 16:50:19 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "🐓🐓WrongAnimal Constructor called" << std::endl;
	type = "WrongAnimal";
};

WrongAnimal::WrongAnimal(const WrongAnimal &daaba)
{
	std::cout << "🐓🐓WrongAnimal copy Constructor called" << std::endl;
	*this = daaba;
};

WrongAnimal	&WrongAnimal::operator= (const WrongAnimal &daaba)
{
	std::cout << "🐓🐓WrongAnimal operator called called" << std::endl;
	if (this != &daaba)
	{
		this->type = daaba.type;
	}
	return (*this);
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "🐓🐓WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "🐓🐓Kaak Kaak!" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (this->type);
}