/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:43:00 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/22 16:26:59 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	std::cout << "🏁Fragtrap Default constructor called" << std::endl;
	name = "🏁Frag default name";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "🏁FragTrap Constructor that takes parameter called name = " << name  << std::endl;
	this->name = name;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap &FragTrap::operator = (const FragTrap &Frag)
{

	std::cout << "🏁FragTrap Copy assignment operator called" << std::endl;
	if (this != &Frag)
		;
		//define staff here;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &Frag)
{
	std::cout << "🏁FragTrap Copy constructor called" << std::endl;
	*this = Frag;
}

FragTrap::~FragTrap()
{
	std::cout << "🏁FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "🏁FragTrap " << name << "giving hi5 Guys 🙌" << std::endl;
}