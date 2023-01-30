/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:52:20 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/21 16:11:49 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	Fixed::fixed_point_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

Fixed &Fixed::operator = (const Fixed &new_fixed)
{
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &new_fixed)
		this->fixed_point_value = new_fixed.fixed_point_value;
	return (*this);
};

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<  std::endl;
	
	return (fixed_point_value);
};

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" <<  std::endl;
	this->fixed_point_value = raw;
};
