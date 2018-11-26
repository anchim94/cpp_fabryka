#include "pch.h"
#include "Rectangle.h"
#include <fstream>

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(std::istream &f_)
{
	f_ >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
}


Rectangle::~Rectangle()
{
}


double Rectangle::Area()
{
	return abs((Bx - Ax)*(Cy - Ay) - (By - Ay)*(Cx - Ax));
}


void Rectangle::PrintName()
{
	std::cout << "class Rectangle \n";
}
