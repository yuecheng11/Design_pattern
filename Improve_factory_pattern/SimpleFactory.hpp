#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_
#include "AbstractProduct.hpp"

class AbsFactory
{
public:
	AbsFactory();
	~AbsFactory();
public:
	virtual AbsProduct* createProduct() = 0;
};

class FactoryA:public AbsFactory
{
public:
	FactoryA();
	~FactoryA();

public:
	AbsProduct* createProduct();
};
class FactoryB:public AbsFactory
{
public:
	FactoryB();
	~FactoryB();

public:
	AbsProduct* createProduct();
};

#endif