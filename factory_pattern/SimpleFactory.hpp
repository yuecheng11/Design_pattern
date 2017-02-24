#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_
#include "AbstractProduct.hpp"

class AbsFactory
{
public:
	AbsFactory();
	~AbsFactory();
public:
	virtual AbsProduct* createProduct(int type) = 0;
};

class SimpleFactory:public AbsFactory
{
public:
	SimpleFactory();
	~SimpleFactory();

public:
	AbsProduct* createProduct(int type);
};

#endif