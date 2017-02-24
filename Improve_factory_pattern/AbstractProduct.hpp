#ifndef _ABSTRACTPROFUCT_H_
#define _ABSTRACTPROFUCT_H_

#include <iostream>
using namespace std;

class AbsProduct
{
public:
	AbsProduct();
	virtual ~AbsProduct();

public:
	virtual void operation() = 0;
};

class ProductA:public AbsProduct
{
public:
	ProductA();
	~ProductA();
public:
	void operation();
};

class ProductB:public AbsProduct
{
public:
	ProductB();
	~ProductB();
public:
	void operation();
};

#endif