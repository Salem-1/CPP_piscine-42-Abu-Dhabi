/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:36:46 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 16:20:29 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << HumanA::name << "  attacks with their " 
		<< HumanA::tool.getType() << std::endl;
	// <name> attacks with their <weapon type>
}

void	HumanA::setName(std::string given_name)
{
	HumanA::name = given_name;
}