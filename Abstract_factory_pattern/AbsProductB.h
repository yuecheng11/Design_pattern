#ifndef _AbSPRODUCTB_H_
#define _AbSPRODUCTB_H_

#include <iostream>
using namespace std;

class AbsproductB
{
public:
	AbsproductB();
	virtual ~AbsproductB();

public:
	virtual void operationB() = 0;
};

class ProductB1:public AbsproductB
{
public:
	ProductB1();
	~ProductB1();
public:
	virtual void operationB();
};

class ProductB2:public AbsproductB
{
public:
	ProductB2();
	~ProductB2();
public:
	virtual void operationB();
};


#endif

