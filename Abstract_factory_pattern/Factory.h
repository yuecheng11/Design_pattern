#ifndef _FACTORY_H_
#define _FACTORY_H_
#include "AbsProductA.h"
#include "AbsProductB.h"

class factory
{
public:
	factory();
	~factory();
public:
	virtual AbsproductA* createProductA() = 0;
	virtual AbsproductB* createProductB() = 0;
};

class factory1:public factory
{
public:
	factory1();
	~factory1();

public:
	AbsproductA* createProductA();
	AbsproductB* createProductB();
	
};

class factory2:public factory
{
public:
	factory2();
	~factory2();

public:
	AbsproductA* createProductA();
	AbsproductB* createProductB();
	
};

#endif