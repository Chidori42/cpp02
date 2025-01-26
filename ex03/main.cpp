/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 00:46:19 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/26 19:47:47 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
    Point a(3, 1);
    Point b(2, 4);
    Point c(6, 4);

    Point point(4, 3);


    if (bsp(a, b, c, point))
        std::cout << "Point is inside triangle" << std::endl;
    else
        std::cout << "Point are out of triangle" << std::endl;


    return (0);
}