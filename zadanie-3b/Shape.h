#pragma once
#include <iostream>
class Shape
{
public:
	Shape();
	~Shape();
	virtual void PrintName();
	virtual double Area() = 0;
};

