/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_str.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:50:58 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 12:31:00 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CastStr.hpp"

types	CastStr::check_string()
{
	type = no_type;
	if (!check_int())
	{
		if (!check_double())
			check_float();
	}
	return (type);
}

int	CastStr::check_double(void)
{
	if (convert_me == "inf" || convert_me == "-inf"
		||	convert_me == "-inf" || convert_me == "nan")
		;
	else if (convert_me[len - 1] == 'f')
		return (0);
	try
	{
		double_val = std::stod(convert_me);
		type = doubles;
	}
	catch (std::invalid_argument& e)
	{
		type = no_type;
		return (1);
	}
	return (1);
};

int	CastStr::check_float(void)
{
	if (convert_me[len - 1] != 'f')
		return (1);
	try
	{
		float_val = std::stof(convert_me);
		type = floats;
	}
	catch (std::invalid_argument& e)
	{
		type = no_type;
		return (1);
		std::cerr << e.what() << '\n';
	}
	return (1);
};

int	CastStr::check_int(void)
{
	if (convert_me[len - 1] == 'f' || convert_me == "nan")
		return (0);
	if (convert_me.std::string::find(".") !=  std::string::npos)
	{
		return (0);
	}
	try
	{
		int_val = std::stoi(convert_me);
		type = ints;
		return (1);
	}
	catch (std::out_of_range const& e)
	{
		type = no_type;
		return (1);
	}
	catch (std::invalid_argument& e)
	{
		type = no_type;
		return (1);
	}
};