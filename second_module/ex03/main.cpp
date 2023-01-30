/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:23:38 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 17:20:13 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

int main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("Sword");
	bob.attack();
	club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(&club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	return 0;
}
/*
	// Weapon tool("Teeth");
	// HumanA kadisa("Kadisa", tool);
	// HumanB nafar("Nafar Maskeen");
	// kadisa.attack();
	// nafar.attack();
	// nafar.setType(tool);
	// nafar.attack();
*/