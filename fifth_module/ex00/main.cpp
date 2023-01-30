/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:29:36 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/23 18:53:37 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongCat	meshmesh;
	const WrongAnimal	sal3awa;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
	meta->makeSound();
	meshmesh.makeSound();
	sal3awa.makeSound();
	std::cout << "wrong animal type " << meshmesh.getType() << std::endl;
	std::cout << "wrong animal type " << sal3awa.getType()  << std::endl;
	delete meta;
	delete j;
	delete i;
	return 0; 
}
