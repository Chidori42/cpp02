/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 00:49:37 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/12/10 02:45:35 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->fix_value = 0;
}

Fixed::Fixed(const int value){
    this->fix_value = value;
}

Fixed::Fixed(const float value){
    this->fix_value = static_cast<int>(std::round(value * (1 << this->FRACTIONAL_BITS)));
}

Fixed::~Fixed(){
}

Fixed::Fixed( const Fixed &other) :fix_value(other.fix_value)
{
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
    return *this;
}
std::ostream& operator<<(std::ostream &out,const Fixed &obj) {
    out << obj.toFloat();
    return out;
}

bool Fixed::operator >(const Fixed& other) const{
    return (this->fix_value > other.fix_value);
}
bool Fixed::operator <(const Fixed& other) const{
    return (this->fix_value < other.fix_value);
}
bool Fixed::operator >=(const Fixed& other){
    return (this->fix_value >= other.fix_value);
}
bool Fixed::operator <=(const Fixed& other){
    return (this->fix_value <= other.fix_value);
}
bool Fixed::operator ==(const Fixed& other){
    return (this->fix_value == other.fix_value);
}
bool Fixed::operator !=(const Fixed& other){
    return (this->fix_value != other.fix_value);
}

Fixed Fixed::operator +(const Fixed& other) const{
    return (this->fix_value + other.fix_value);
}

Fixed Fixed::operator -(const Fixed& other) const{
    return (this->fix_value - other.fix_value);
}

Fixed Fixed::operator *(const Fixed& other){
    return (this->fix_value * other.fix_value);
}

Fixed  Fixed::operator /(const Fixed& other){
    return (this->fix_value / other.fix_value);
}

Fixed Fixed::operator ++(){
    ++this->fix_value;
    return (*this);
}
Fixed Fixed::operator ++(int){
    Fixed tmp;
    tmp = *this;
    ++this->fix_value;
    return (tmp);
}
Fixed Fixed::operator --(){
    --this->fix_value;
    return (*this);
}
Fixed Fixed::operator --(int){
    Fixed tmp;
    tmp = *this;
    --this->fix_value;
    return (tmp);
}


Fixed &Fixed::min(Fixed& n1, Fixed& n2){
    if (n1 <= n2)
        return (n1);
    return (n2);
}
// static Fixed& min(const Fixed& n1, const Fixed& n2){
//     if (n1 <= n2)
//         return (n1);
//     return (n2);
// }
Fixed &Fixed::max(Fixed& n1, Fixed& n2){
    if (n1 >= n2)
        return (n1);
    return (n2);
}
// static Fixed& max(const Fixed& n1, const Fixed& n2){
//     if (n1 <= n2)
//         return (n1);
//     return (n2);
// }