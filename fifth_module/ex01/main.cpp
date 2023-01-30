/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:29:36 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/24 00:19:49 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	// Cat cadesa;
	// const Animal	*animals[10];
	// for (int i = 0; i < 5; i++)
	// 	animals[i] = new Dog();
	// for (int i = 5; i < 10; i++)
	// 	animals[i] = new Cat();
	// for (int i = 0; i < 10; i++)
	// 	animals[i]->makeSound();
	// for (int i = 0; i < 10; i++)
	// 	delete animals[i];
	
	Cat *kadesa = new Cat();
	kadesa->setIdea("Rule the world", 0);
	Cat	herra(*kadesa);
	delete kadesa;
	std::cout << "Idea  = " << herra.getIdea(0) << std::endl;
	
	
	// rix.setIdea("Rule the world", 0);
	
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// const WrongCat	meshmesh;
	// const WrongAnimal	sal3awa;
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound! j->makeSound();
	// meta->makeSound();
	// meshmesh.makeSound();
	// sal3awa.makeSound();
	// std::cout << "wrong animal type " << meshmesh.getType() << std::endl;
	// std::cout << "wrong animal type " << sal3awa.getType()  << std::endl;
	// delete meta;
	// delete j;
	// delete i;
	return 0; 
}

	//testing deep copy
	// Dog *rix = new Dog();
	// rix->setIdea("Rule the world", 0);
	// Dog	kalb(*rix);
	// delete rix;
	// std::cout << "Idea  = " << kalb.getIdea(0) << std::endl;
	
