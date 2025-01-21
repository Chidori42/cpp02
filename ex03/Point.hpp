#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const float n1, const float n2);
        ~Point();
        Point(const Point &other);
        Point &operator=(const Point &other);
        Fixed getX() const;
        Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif