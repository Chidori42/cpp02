/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:04:10 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/21 16:14:42 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->fix_value = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fix_value);
}
void Fixed::setRawBits( int const raw ){
    this->fix_value = raw;
}

Fixed::Fixed( const Fixed &other) :fix_value(other.fix_value)
{
    std::cout << "Copy constructor called" << std::endl;
    getRawBits();
}
Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        this->fix_value = other.fix_value;
    }
    std::cout << "copy assignment operator called" << std::endl;
    getRawBits();
    return *this;
}