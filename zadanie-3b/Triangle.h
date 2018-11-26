#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle();
	Triangle(std::istream &f_);
	~Triangle();
	double Area();
	//pola klasy
	double Ax;
	double Ay;
	double Bx;
	double By;
	double Cx;
	double Cy;
	 void PrintName();
};

