#include "pch.h"
#include "Triangle.h"
#include <fstream>

Triangle::Triangle()
{

}

Triangle::Triangle(std::istream& f_)
{
	f_ >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
}


Triangle::~Triangle()
{
}



double Triangle::Area()
{
	return abs(0.5* ((Bx - Ax)*(Cy - Ay) - (By - Ay)*(Cx - Ax)));
}


void Triangle::PrintName()
{
	std::cout << "class Triangle \n";
}
