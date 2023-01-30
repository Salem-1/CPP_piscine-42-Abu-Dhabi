/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:19:11 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 15:53:16 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
class	Weapon
{
	public:
		Weapon(){
			tool = "hand";
		}
		Weapon(std::string input){
			setType(input);
		}
		const std::string	getType();
		void				setType(std::string input);
	private:
		std::string tool;
};


#endif

/*
Implement a Weapon class that has:
• A private attribute type, which is a string.
• A getType() member function that returns a const reference to type.
• A setType() member function that sets type using the new one passed as param- eter.
*/