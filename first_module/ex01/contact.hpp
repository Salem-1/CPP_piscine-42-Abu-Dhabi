/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:16:43 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/15 20:33:19 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

void	handle_malicious_input();
class	Contact
{
	private:
		std::string			first_name;
		std::string			last_name;
		std::string			nickname;
		std::string			darkest_secret;
		std::string			phone;
	
	public:
	/*----------------=======------SETTERS--------------======------------*/
		void				set_first_name(void);
		void				set_last_name(void);
		void				set_nickname(void);
		void				set_darkest_secret(void);
		void				set_phone(void);
		
	/*----------------=======------GETTERS--------------======------------*/
		const std::string	get_first_name(void);
		const std::string	get_last_name(void);
		const std::string	get_nickname(void);
		const std::string	get_darkest_secret(void);
		const std::string	get_phone(void);
	/*----------------=======------ERRORS-------------======------------*/
		void				err_name(void);
		void				err_darkest_secret(void);
		void				err_phone(void);
		void				empty_field_message(void);
	
};

#endif