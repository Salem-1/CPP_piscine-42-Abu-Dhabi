/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:30:56 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/23 20:49:17 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "🧠Brain Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "🧠Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &brain2)
{
	std::cout << "🧠Brain copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
			this->ideas[i] = brain2.ideas[i];
}

Brain	Brain::operator= (const Brain &brain2)
{
	std::cout << "🧠Brain assignment operator called" << std::endl;
	if (this != &brain2)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain2.ideas[i];
	}
	return (*this);
}
void	Brain::setIdea(std::string idea, int index)
{
	std::cout << "🧠Setting idea" << std::endl;
	if (index < 0 || index > 99)
	{
		std::cout << "Error: idea index out of range" << std::endl;
		return ;
	}
	ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index > 99)
	{
		return "Error: idea index out of range";
	}
	return (ideas[index]);
}