/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 00:46:19 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/21 16:01:50 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);

    Point point(6, 6);

    Point point2;
    point2 = point;

    std::cout << "x = " << point2.getX() << "y = " << point2.getY() << std::endl;
    if (bsp(a, b, c, point2))
        std::cout << "Point is inside triangle" << std::endl;
    else
        std::cout << "Point are out of triangle" << std::endl;


    return (0);
}