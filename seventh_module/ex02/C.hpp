/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:22:44 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 12:13:33 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP
# include "B.hpp"

class	C: public Base
{
	public:
		C() {};
		~C() {};
		bool	operator==(Base  *obj2);
		bool	operator==(Base  &obj2);
		void	whoami();
	private:
		std::string	empty_string[100];
};
Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);
#endif