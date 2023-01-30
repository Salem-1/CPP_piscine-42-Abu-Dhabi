/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:30:55 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/24 00:00:17 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &brain2);
		Brain		operator= (const Brain &brain2);
		void		setIdea(std::string idea, int index);
		std::string	getIdea(int index) const;
	protected:
		std::string	ideas[100];
};
#endif