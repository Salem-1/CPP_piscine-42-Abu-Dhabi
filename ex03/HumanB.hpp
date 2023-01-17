/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:55:50 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 16:05:39 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "HumanA.hpp"

class HumanB
{
	public:
		HumanB(std::string given_name)
		{
			setName(given_name);
			tool = NULL;
		};
		~HumanB(){
			std::cout << "Destroing " << name << std::endl;
		};
		void	setWeapon(Weapon *input);
		void	setName(std::string given_name);
		void	attack();
	private:
		std::string	name;
		Weapon		*tool;
};
#endif