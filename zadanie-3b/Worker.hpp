#pragma once
#include "Shape.h"
#include <fstream>

template<class T>
class Worker : public WorkerBase {
	virtual Shape* Produce(std::istream &f_) override
	{
		return new T(f_);
	}
};