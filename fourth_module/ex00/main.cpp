/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:17:09 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/21 20:13:14 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap cl("hopa");
	cl.attack("Devil");
	cl.beRepaired(3);
	cl.takeDamage(2);
	ClapTrap hi("another cpy");
	cl = hi;

}