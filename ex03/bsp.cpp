/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:56:26 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/26 19:50:08 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float check_sign(float number)
{
    if (number < 0)
        return (-number);
    return (number);
}

float Calculate_area(int a_x, int a_y, int b_x, int b_y, int c_x, int c_y)
{
    return (check_sign(a_x * (b_y - c_y) + b_x * (c_y - a_y) + c_x * (a_y - b_y)) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    float a_x = a.getX().toFloat();
    float a_y = a.getY().toFloat();

    float b_x = b.getX().toFloat();
    float b_y = b.getY().toFloat();

    float c_x = c.getX().toFloat();
    float c_y = c.getY().toFloat();

    float point_x = point.getX().toFloat();
    float point_y = point.getY().toFloat();

    float ABC = Calculate_area (a_x, a_y, b_x, b_y, c_x, c_y);
    float PBC = Calculate_area (point_x, point_y, b_x, b_y, c_x, c_y);
    float APC = Calculate_area (a_x, a_y, point_x, point_y, c_x, c_y);
    float ABP = Calculate_area (a_x, a_y, b_x, b_y, point_x, point_y);
    if (!ABC || !PBC || !APC || !ABP)
    	return (false);
    if (ABC == (PBC + APC + ABP))
        return (true);
    else
        return (false);
}
