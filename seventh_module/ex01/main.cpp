/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:53:13 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 12:34:45 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main(void)
{
	Data	*d = new Data;
	Data *tmp = d;
	std::cout << "d address before serialization " << &d << std::endl;
	uintptr_t casted_cpy = serialize(d);
	std::cout << "d address after serialization " << &d << std::endl;
	std::cout << "casted_cpy address after serialization " << casted_cpy << std::endl;
	d = deserialize(casted_cpy);
	// d = deserialize(d);
	
	std::cout << "d address after deserialization " << &d << std::endl;
	std::cout << "casted_cpy address after deserialization " << casted_cpy << std::endl;
	delete tmp;
	return (0);
}

