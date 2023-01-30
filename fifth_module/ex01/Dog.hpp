/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:34:15 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/24 00:10:24 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Animal;
class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &dog2);
		~Dog();
		Dog			&operator= (const Dog &dog2);
		void		makeSound() const;
		void		setIdea(std::string idea, int index);
		void		setBrain(Brain *in_brain);
		Brain		getBrain() const;
		std::string	getIdea(int index) const;
	private:
		Brain	*brain;
};
#endif