/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:56:26 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/21 15:36:43 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float Calculate_area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return (fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    float x1 = a.getX().toFloat();
    float y1 = a.getY().toFloat();

    float x2 = b.getX().toFloat();
    float y2 = b.getY().toFloat();

    float x3 = c.getX().toFloat();
    float y3 = c.getY().toFloat();

    float px = point.getX().toFloat();
    float py = point.getY().toFloat();

    float A = Calculate_area (x1, y1, x2, y2, x3, y3);
    float A1 = Calculate_area (px, py, x2, y2, x3, y3);
    float A2 = Calculate_area (x1, y1, px, py, x3, y3);
    float A3 = Calculate_area (x1, y1, x2, y2, px, py); 
    return (A == A1 + A2 + A3);
}