/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_to_str.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:03:39 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 08:10:13 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CastStr.hpp"

void	CastStr::types_to_string(void)
{
	switch (type)
	{
		case no_type:
			break ;
		case chars:
		{
			if (convert_me[0] >= 32 && convert_me[0] <= 126)
				messages[0] = convert_me[0];
			else
				messages[0] = "Non printable character";
			break ;
		}
		case floats:
		{
			cast_to_float();
			break ;
		}
		case ints:
		{
			cast_to_int();
			break ;
		}
		case doubles:
		{
			cast_to_double();
			break ;
		}
	}
	
};

void	CastStr::cast_to_int(void)
{
	std::ostringstream oss_int;
	oss_int << int_val;
	messages[1] =  oss_int.str();
	float_val = static_cast<float>(int_val);
	std::ostringstream oss_float;
	oss_float << float_val;
	messages[2] =  oss_float.str()+ "f";
	double_val = static_cast<double>(int_val);
	std::ostringstream oss_double;
	oss_double << double_val;
	messages[3] =  oss_double.str();
}
void	CastStr::cast_to_float(void)
{
	std::ostringstream oss_float;
	oss_float << float_val;
	messages[2] =  oss_float.str()+ "f";
	double_val = static_cast<double>(float_val);
	std::ostringstream oss_double;
	oss_double << float_val;
	messages[3] =  oss_double.str();
	if (float_val == INFINITY || float_val == -INFINITY
		|| float_val == NAN || double_val == INFINITY
		|| double_val == -INFINITY || double_val == NAN
		|| double_val > 2147483647  || double_val < -2147483648)
		return ; 
	if (oss_double.str() == "nan")
		return ;
	std::ostringstream oss_int;
	int_val = static_cast<int>(float_val);
	oss_int << int_val;
	messages[1] =  oss_int.str();
}
void	CastStr::cast_to_double(void)
{
	float_val = static_cast<float>(double_val);
	std::ostringstream oss_float;
	oss_float << float_val;
	messages[2] =  oss_float.str()+ "f";
	std::ostringstream oss_double;
	oss_double << double_val;
	messages[3] =  oss_double.str();
	if (float_val == INFINITY || float_val == -INFINITY
		|| float_val == NAN || double_val == INFINITY
		|| double_val == -INFINITY || double_val == NAN
		|| double_val > 2147483647  || double_val < -2147483648)
		return ;
	if (oss_double.str() == "nan")
		return ;
	std::ostringstream oss_int;
	int_val = static_cast<int>(double_val);
	oss_int << int_val;
	messages[1] =  oss_int.str();
}