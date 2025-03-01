/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:59:25 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/26 20:17:41 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class Fixed{
    private:
        int fix_value;
        static const int FRACTIONAL_BITS = 8;
    public:
        Fixed();
        ~Fixed();

        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
};

#endif
