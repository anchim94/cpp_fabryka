#pragma once
#include "Shape.h"
#include <fstream>
#include <map>
class WorkerBase
{
public:
	WorkerBase();
	~WorkerBase();
	virtual Shape* Produce(std::istream &f_) = 0;

};

