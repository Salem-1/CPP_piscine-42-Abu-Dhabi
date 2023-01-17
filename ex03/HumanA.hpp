/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:30:30 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 16:27:18 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string given_name,Weapon &input) : tool(input)
		{
			setName(given_name);
		};
		~HumanA(){
			std::cout << "Destroing " << name << std::endl;
		};
		void	setName(std::string given_name);
		void	attack();
	private:
		Weapon		&tool;
		std::string	name;
};
#endif
