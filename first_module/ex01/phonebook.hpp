/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:16:43 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/15 22:18:06 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"
# include <unistd.h>

class	PhoneBook
{
	private:
		int			contact_counter;

	public:
		Contact		contacts[8];

		void		start();
		void		welcome_message();
		int			handle_response(
						std::string response);
		void		add_contact();
		void		fill_contact_details(Contact &single_contact);
		void		search_contacts();
		void		display_contacts(void);
		void		display_short_contact(int	i);
		void		format_searched_fields(std::string name);
		int			get_index_from_user(void);
		void		display_contact_from_phonebook(int index);
};
#endif