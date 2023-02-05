/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 08:03:24 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/31 11:50:41 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
#include <vector>

template <typename T>
typename T::iterator easyfind(T a, int b)
{
	typename T::iterator it;
	it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw (std::exception());
	return (it);
	// return(a.find(b));
}

// //find the first occurance of the second parameter in the first parameter
#endif


