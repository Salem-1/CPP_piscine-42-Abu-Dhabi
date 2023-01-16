/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 06:23:32 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/16 07:20:00 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string input)
		{
			name = input;
		}
		~Zombie()
		{
			std::cout << "Destroying zombie " << name <<  std::endl;
		};

		void announce(void);
		
	private:
		std::string	name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);