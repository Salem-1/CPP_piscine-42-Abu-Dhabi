/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 06:23:32 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 08:14:26 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(){}
		Zombie(std::string input)
		{
			name = input;
		}
		~Zombie()
		{
			std::cout << "Destroying zombie " << name <<  std::endl;
		};
		void	set_name(std::string your_name);
		void	announce(void);
		
	private:
		std::string	name;
};


Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);