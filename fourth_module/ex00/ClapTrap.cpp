/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:15:07 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/21 20:19:00 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "Fathy";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor that takes parameter called" << std::endl;
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
};

ClapTrap &ClapTrap::operator = (const ClapTrap &clap)
{

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &clap)
		;
		//define staff here;
	return (*this);
};

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clap;
};

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
};

//will decrease target hitpoint later
void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points < 0 && this->energy_points < 0)
		return ;
	if (this->attack_damage < 1)
	{
		std::cout << this->name << "Cannot attack, has 0 attack_damage :(" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " <<  this->name <<  " attacks " << target <<
	" causing " <<  this->attack_damage  << " points of damage! " << std::endl;
	this->energy_points--;
}
// Attacking and repairing cost 1 energy point each. Of course, 
//ClapTrap can’t do anything if it has no hit points or energy points left.
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points < 0 && this->energy_points < 0)
		return ;
	this->attack_damage += amount;
	std::cout << "ClapTrap " <<  this->name <<  " Takes damage, now attack damage " <<
	this->attack_damage << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points < 0 && this->energy_points < 0)
		return ;
	this->hit_points += amount;
	this->energy_points--;
	std::cout << "ClapTrap " <<  this->name <<  " repaired now points  " <<
	this->hit_points << std::endl;
}
