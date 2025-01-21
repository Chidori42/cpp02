/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:42:35 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/21 16:10:54 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(){
    // std::cout << "Default Constructor Called" << std::endl;
}
Point::~Point(){
    // std::cout << "Desstructor Called" << std::endl;
}
Point::Point(const float n1, const float n2): x(n1), y(n2){
}
Point::Point(const Point &other): x(other.x), y(other.y){

}

Point &Point::operator=(const Point &other){
    if (this != &other)
    {
        
    }
    return *this;
}

Fixed Point::getX() const{
    return (this->x);
}
Fixed Point::getY() const{
    return (this->y);
}