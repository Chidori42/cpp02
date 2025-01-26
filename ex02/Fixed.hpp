/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:35:46 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/26 20:35:48 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fix_value;
        static const int FRACTIONAL_BITS = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int value);
        Fixed(const float value);

        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);

        float toFloat( void ) const;
        int toInt( void ) const;

        bool operator >(const Fixed& other) const;
        bool operator <(const Fixed& other) const;
        bool operator >=(const Fixed& other) const;
        bool operator <=(const Fixed& other) const;
        bool operator ==(const Fixed& other) const;
        bool operator !=(const Fixed& other) const;

        Fixed operator +(const Fixed& other) const;
        Fixed operator -(const Fixed& other) const;
        Fixed operator *(const Fixed& other) const;
        Fixed operator /(const Fixed& other) const;

        Fixed operator ++();
        Fixed operator ++(int);
        Fixed operator --();
        Fixed operator --(int);

        static Fixed& min(Fixed& n1, Fixed& n2);
        static const Fixed& min(const Fixed& n1, const Fixed& n2);
        static Fixed& max(Fixed& n1, Fixed& n2);
        static const Fixed& max(const Fixed& n1, const Fixed& n2);
};
    std::ostream& operator<<(std::ostream &out,const Fixed &obj);

#endif
