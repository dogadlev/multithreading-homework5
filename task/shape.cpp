#include"shape.h"

Shape::Shape(std::vector<Point>& vecPoints)
{
	points_ptr = std::make_unique<std::vector<Point>>(vecPoints);
}

void Shape::shift(int m, int n, int k)
{
	for(auto itr = points_ptr->begin(); itr != points_ptr->end(); ++itr)
		itr->shift(m, n, k);
}
void Shape::scaleX(int a)
{
	for(auto itr = points_ptr->begin(); itr != points_ptr->end(); ++itr)
		itr->scaleX(a);
}
void Shape::scaleY(int d)
{
	for(auto itr = points_ptr->begin(); itr != points_ptr->end(); ++itr)
		itr->scaleY(d);
}
void Shape::scaleZ(int e)
{
	for(auto itr = points_ptr->begin(); itr != points_ptr->end(); ++itr)
		itr->scaleZ(e);
}
void Shape::scale(int s)
{
	for(auto itr = points_ptr->begin(); itr != points_ptr->end(); ++itr)
		itr->scale(s);
}