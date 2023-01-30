/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:17:09 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/22 15:03:13 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap ash("Ash");
	ScavTrap pika("pikashow");
	ClapTrap term("Terminator");
	pika.attack("Terminator");
	term.takeDamage(2);
	term.beRepaired(3);
	ScavTrap mew("Mew");
	mew.guardGate();
	pika = mew;

}