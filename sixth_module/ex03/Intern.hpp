/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:10:50 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:23:51 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
class	Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const &obj2);
		Intern &operator= (Intern const &obj2);
		AForm *makeForm(std::string form_name, std::string form_target);
		std::string 	getForms(int index) const;
		class FormCreationgException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Intern cannot make the requested form, Wrong form name.");
				}
		};
	private:
		 std::string	forms[3];
		// AForm *		created_form[3];
	
};
#endif