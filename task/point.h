#pragma once
#include <stdexcept>

class Point
{
public:
    Point() = default;
    Point(int, int, int);
    virtual ~Point(){}
    void shift(int, int, int);
    void scaleX(int);
    void scaleY(int);
    void scaleZ(int);
    void scale(int);
private:
    int x = 0;
    int y = 0;
    int z = 0;
};