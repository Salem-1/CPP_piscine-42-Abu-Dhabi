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

Dog::Dog() : brain(new Brain())
{
	std::cout << "🐶Dog constructor called" << std::endl;
	type = "Dog";
}

Dog	&Dog::operator = (const Dog &dog2)
{
	std::cout << "🐶Dog copy assignment operator called" << std::endl;
	if (this != &dog2)
	{
		brain = new Brain();
		*brain = Brain(dog2.getBrain());
	}
	return (*this);
}

Dog::Dog(const Dog &dog2) : Animal(dog2)
{
	std::cout << "🐶Dog copy Constructor called" << std::endl;
	brain = new Brain();
	*brain = Brain(dog2.getBrain());
}
Dog::~Dog()
{
	std::cout << "🐶Dog Destructor called" << std::endl;
	delete brain;
}

void	Dog::makeSound() const
{
	std::cout << "🐶Woof Woof!" << std::endl;
}

void	Dog::setIdea(std::string idea, int index)
{
	brain->setIdea(idea, index);
}

std::string Dog::getIdea(int index) const
{
	return (brain->getIdea(index));
}

void	Dog::setBrain(Brain *in_brain)
{
	brain = in_brain;
}

Brain	Dog::getBrain() const
{
	return (*brain);
}
