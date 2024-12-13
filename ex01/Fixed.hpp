/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:59:25 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/12/11 10:27:38 by ael-fagr         ###   ########.fr       */
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
};
std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
