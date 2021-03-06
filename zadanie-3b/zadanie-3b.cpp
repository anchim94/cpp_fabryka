#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "WorkerBase.h"
#include "Worker.hpp"
#include <vector>
#include <fstream>
#include <string>
#include <map>

int main()
{
	std::cout << "Hello World!\n";
	std::map < std::string, WorkerBase* > factory;
	factory["circle"] = new Worker <Circle>();
	factory["triangle"] = new Worker <Triangle>();
	factory["rectangle"] = new Worker <Rectangle>();

	std::vector<Shape*> tabp;
	std::fstream f("tekst.txt");
	std::string bufor;
	while (f >> bufor)
	{
		//tabp.push_back(factory[bufor]->Produce(f));
		tabp.push_back(factory.find(bufor)->second->Produce(f));

	}
	f.close();

	int count = 0;
	for (int i = 0; i < tabp.size(); ++i)
	{
		tabp[i]->PrintName();
		std::cout << tabp[i]->Area() << std::endl;
		if (dynamic_cast<Circle*>(tabp[i])) count++;
	}
	std::cout << "Circle " << count;
}
