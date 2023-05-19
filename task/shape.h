#pragma once
#include <vector>
#include <point.h>
#include <memory>

class Shape
{
public:
	Shape() = default;
	Shape(std::vector<Point>&);
	void shift(int, int, int);
    void scaleX(int);
    void scaleY(int);
    void scaleZ(int);
    void scale(int);
private:
	std::unique_ptr<std::vector<Point>> points_ptr = nullptr;
};