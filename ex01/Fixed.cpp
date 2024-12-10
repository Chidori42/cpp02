/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:04:10 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/11/27 00:37:40 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->fix_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value){
    this->fix_value = value << this->FRACTIONAL_BITS;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value){
    this->fix_value = static_cast<int>(std::round(value * (1 << this->FRACTIONAL_BITS)));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other) :fix_value(other.fix_value)
{
    std::cout << "Copy constructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
    return (static_cast<float>(this->fix_value) / (1 << FRACTIONAL_BITS));
}
int Fixed::toInt( void ) const{
    return (this->fix_value >> this->FRACTIONAL_BITS);
}
Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->fix_value = other.fix_value;
    std::cout << "copy assignment operator called" << std::endl;
    return *this;
}
std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
    out << obj.toFloat();
    (void)obj;
    return out;
}