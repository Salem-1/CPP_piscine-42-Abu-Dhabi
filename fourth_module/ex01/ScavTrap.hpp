/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:27:03 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/22 16:23:54 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include "ClapTrap.hpp"

class ClapTrap;
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &Scav);
		ScavTrap &operator= (const ScavTrap &Scav);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
};
#endif