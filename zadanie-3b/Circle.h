#pragma once
#include "Shape.h"

class Circle :
	public Shape
{
public:
	Circle();
	Circle(std::istream& f_);
	~Circle();
	double Rx;
	double Ry;
	double radius;
	double Area();
	 void PrintName();
};

