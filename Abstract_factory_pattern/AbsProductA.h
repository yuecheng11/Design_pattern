#ifndef _AbSPRODUCTA_H_
#define _AbSPRODUCTA_H_

#include <iostream>
using namespace std;

class AbsproductA
{
public:
	AbsproductA();
	virtual ~AbsproductA();

public:
	virtual void operationA() = 0;
};

class ProductA1:public AbsproductA
{
public:
	ProductA1();
	~ProductA1();
public:
	virtual void operationA();
};

class ProductA2:public AbsproductA
{
public:
	ProductA2();
	~ProductA2();
public:
	virtual void operationA();
};


#endif