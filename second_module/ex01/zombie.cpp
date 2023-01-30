/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 06:23:30 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 08:12:22 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << Zombie::name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}

void	randomChump(std::string name)
{
	Zombie	dead_zombie(name);
	dead_zombie.announce();
}

void	Zombie::set_name(std::string your_name)
{
	Zombie::name = your_name;
}
Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*hoarde;

	if (N <= 0)
	{
		std::cout << "Cannot create " << N << "number of zombies" << std::endl;
		return (NULL);
	}
	hoarde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		hoarde[i].set_name(name);
	}
	return (hoarde);
}