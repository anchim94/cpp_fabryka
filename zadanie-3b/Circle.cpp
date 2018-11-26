#include "pch.h"
#include "Circle.h"
#include <cmath>
#include <fstream>

Circle::Circle()
{
}

Circle::Circle(std::istream& f_)
{
	f_ >> Rx >> Ry >> radius;
}


Circle::~Circle()
{
}


double Circle::Area()
{
	return 3.14159265358979*radius*radius;
}


void Circle::PrintName()
{
	std::cout << "class Circle \n";
}
