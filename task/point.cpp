#include "point.h"

Point::Point(int _x, int _y, int _z) : x(_x), y(_y), z(_z){}
void Point::shift(int m, int n, int k)
{
    Point::x += m;
    Point::y += n;
    Point::z += k;
}
void Point::scaleX(int a)
{
    Point::x *= a;
}
void Point::scaleY(int d)
{
    Point::y *= d;
}
void Point::scaleZ(int e)
{
    Point::z *= e;
}
void Point::scale(int s)
{
    if(s == 0)
        throw std::runtime_error("Incorrect input. Scale parameter should not be equals to zero!");
    Point::x /= s;   
    Point::y /= s;   
    Point::z /= s;
}