/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:29:42 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/23 16:49:29 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &daaba2);
		WrongAnimal	&operator= (const WrongAnimal &daaba);
		virtual					~WrongAnimal();
		virtual void			makeSound() const;
		virtual std::string		getType() const;
	protected:
		std::string type;
};
#endif