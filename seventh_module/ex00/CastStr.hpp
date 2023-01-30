/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CastStr.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:09:06 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 07:32:35 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTSTR_HPP
# define CASTSTR_HPP
# include <iostream>
# include <string>
#	include <sstream>
# include <cctype>
# include <float.h>
enum	types
{
	ints = 0,
	floats,
	doubles,
	chars,
	no_type = 4
};

class CastStr
{
	public:
		CastStr();
		CastStr(char *input);
		~CastStr();
		CastStr(CastStr const &obj2);
		CastStr	&operator= (CastStr const &obj2);
		void	do_casting(void);
		types	check_type(void);
		types	check_string(void);
		int		check_limits(void);
		int		check_float(void);
		int		check_double(void);
		int		check_int(void);
		void	types_to_string(void);
		void	cast_to_int(void);
		void	cast_to_float(void);
		void	cast_to_double(void);

	private:
		std::string	convert_me;
		std::string	messages[4];
		int			len;
		int			int_val;
		float		float_val;
		double		double_val;
		types		type;
};

#endif