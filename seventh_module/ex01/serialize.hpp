/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:01:05 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 09:01:56 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
# include <iostream>
# include <cstdint>

typedef struct Data
{
	int		num;
	float	another_num;
} Data;


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif