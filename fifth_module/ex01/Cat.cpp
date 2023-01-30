/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:57:09 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/24 00:20:10 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "😹Cat constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &cadesa2) : Animal(cadesa2)
{
	std::cout << "😹Cat copy constructor called" << std::endl;
	brain = new Brain();
	*brain = Brain(cadesa2.getBrain());
}

Cat	&Cat::operator= (const Cat &cadesa2)
{
	std::cout << "😹Cat copy assignment operator called" << std::endl;
	if (this != &cadesa2)
	{
		*brain = Brain(cadesa2.getBrain());
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "😹Cat Destructor called" << std::endl;
	delete brain;
}

void	Cat::setBrain(Brain *in_brain)
{
	brain = in_brain;
}

void	Cat::setIdea(std::string idea, int index)
{
	brain->setIdea(idea, index);
}

std::string Cat::getIdea(int index) const
{
	return (brain->getIdea(index));
}

Brain	Cat::getBrain() const
{
	return (*brain);
}

void	Cat::makeSound() const
{
	std::cout << "🐈 Mew Mew!" << std::endl;
}