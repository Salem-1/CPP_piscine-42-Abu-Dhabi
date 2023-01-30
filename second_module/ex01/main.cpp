/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 06:23:27 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 08:56:25 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int	main(void)
{
	Zombie*	horde;
	int		n;

	n = 10;
	horde = zombieHorde(n, "Sal3aowa");
	if (!horde)
		return (1);
	for (int i = 0; i < n ; i++)
		horde[i].announce();
	delete []horde;
	return (0);
}



/*
1-First, implement a Zombie class. 
2-It has a string private attribute name.
3-Add a member function void announce( void );
	Zombies announce themselves as follows:
<name>: BraiiiiiiinnnzzzZ...
4-implement the two following functions:
	• Zombie* newZombie( std::string name );
	It creates a zombie, name it, and return it so you can use it outside of the function scope.
	• void randomChump( std::string name );
	It creates a zombie, name it, and the zombie announces itself.
5-The destructor must print a message with the name of the zombie for debugging purposes.
6-Use new and delete whenever needed.
Now, what is the actual point of the exercise? You have to determine in what case it’s better to allocate the zombies on the stack or heap.
Zombies must be destroyed when you don’t need them anymore. 
*/