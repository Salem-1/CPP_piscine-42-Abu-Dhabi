/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 06:23:27 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/17 12:15:06 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int	main(void)
{
	Zombie	*a;
	Zombie	*b;
	Zombie	*c;
	Zombie	farghaly("Sal3awa");

	farghaly.announce();
	randomChump("Raya");
	a = newZombie("3atrees");
	b = newZombie("Abo regl Maslokha");
	c = newZombie("Elnadaha");
	a->announce();
	delete a;
	b->announce();
	delete b;
	c->announce();
	delete c;
}
