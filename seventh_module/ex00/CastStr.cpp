/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CastStr.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:13:20 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 12:31:23 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CastStr.hpp"

CastStr::CastStr(): convert_me(std::string("Basic invalid input")), len(convert_me.length()), 
	int_val(0), float_val(0.0f), double_val(0.0), type(check_type())
{
	for (int i = 0; i < 4; i++)
		messages[i] = "Non displayable";
};

CastStr::CastStr(char *input) : convert_me(std::string(input)), len(convert_me.length()), 
	int_val(0), float_val(0.0f), double_val(0.0),  type(check_type())
{
	for (int i = 0; i < 4; i++)
		messages[i] = "Non displayable";
};

CastStr::~CastStr() {};

CastStr::CastStr(CastStr const &obj2)
{
	*this = obj2;
};

CastStr	&CastStr::operator= (CastStr const &obj2)
{
	if (this != &obj2)
	{
		this->convert_me = obj2.convert_me;
		this->len = obj2.len;
		this->int_val = obj2.int_val;
		this->float_val = obj2.float_val;
		this->double_val = obj2.double_val;
		this->type = obj2.type;
		for (int i = 0; i < 4; i++)
			messages[i] = obj2.messages[i];
	}
	return (*this);
};

void	CastStr::do_casting(void)
{
	types_to_string();

	std::cout << "char:  " << messages[0] << std::endl;
	std::cout << "int:  " << messages[1] << std::endl;
	std::cout << "float:  " << messages[2] << std::endl;
	std::cout << "double:  " << messages[3] << std::endl;
};

types	CastStr::check_type()
{
	switch	(len)
	{
		case 0:
		{
			return (no_type);
			break ;
		}
		case 1:
		{
			if (!isdigit(convert_me[0]))
				return (chars);
			else
				return (check_string());
		}
		break ;
	}
	return (check_string());
};
