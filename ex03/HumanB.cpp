/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:36:46 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 16:06:43 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << HumanB::name << "  attacks with their ";
	if (HumanB::tool != NULL)
		std::cout << HumanB::tool->getType() << std::endl;
	else
		std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon *input)
{
	HumanB::tool = input;
}

void	HumanB::setName(std::string given_name)
{
	HumanB::name = given_name;
}
