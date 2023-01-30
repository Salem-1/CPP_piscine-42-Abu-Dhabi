/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:29:42 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/23 22:29:17 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(const Animal &daaba2);
		virtual Animal		&operator= (const Animal &daaba2);
		virtual		~Animal();
		virtual		void makeSound() const;
		std::string	getType() const;
	protected:
		std::string type;
};
#endif