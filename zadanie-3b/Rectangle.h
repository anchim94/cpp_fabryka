#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	Rectangle();
	Rectangle(std::istream &f_);
	~Rectangle();
	double Ax;
	double Ay;
	double Bx;
	double By;
	double Cx;
	double Cy;
	double Area();
	void PrintName();
};

