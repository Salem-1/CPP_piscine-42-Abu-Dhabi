/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:27:00 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/22 16:10:58 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "🤖Scavtrap Default constructor called" << std::endl;
	name = "🤖Scav default name";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "🤖ScavTrap Constructor that takes parameter called name = " << name  << std::endl;
	this->name = name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scav)
{

	std::cout << "🤖ScavTrap Copy assignment operator called" << std::endl;
	if (this != &scav)
		;
		//define staff here;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	std::cout << "🤖ScavTrap Copy constructor called" << std::endl;
	*this = scav;
}

ScavTrap::~ScavTrap()
{
	std::cout << "🤖ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout  << name << " now in GateKeeper mode 🛂" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hit_points < 0 && this->energy_points < 0)
		return ;
	if (this->attack_damage < 1)
	{
		std::cout << this->name << "in ScavTrap Cannot attack, has 0 attack_damage :(" << std::endl;
		return ;
	}
	std::cout << "🤖ScavTrap " <<  this->name <<  " attacks " << target <<
	" causing " <<  this->attack_damage  << " points of damage! " << std::endl;
	this->energy_points--;
}