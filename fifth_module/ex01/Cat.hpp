/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:33:20 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/24 00:20:45 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Dog.hpp"

class Animal;
class	Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &cadesa2);
		~Cat();
		Cat 	&operator = (const Cat &cadesa2);
		void		makeSound() const;
		void		setIdea(std::string idea, int index);
		void		setBrain(Brain *in_brain);
		Brain		getBrain() const;
		std::string	getIdea(int index) const;
	private:
		Brain	*brain;
};
#endif