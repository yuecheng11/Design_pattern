#include "Factory.h"
using namespace std;

int main()
{
	factory* fac = new factory1();
	AbsproductA* proA = fac->createProductA();
	AbsproductB* proB = fac->createProductB();
	proA->operationA();
	proB->operationB();

	delete fac;
	fac = NULL;
	delete proA;
	proA = NULL;
	delete proB;
	proB = NULL;

	fac = new factory2();
	proA = fac->createProductA();
	proB = fac->createProductB();
	proA->operationA();
	proB->operationB();

	delete fac;
	fac = NULL;
	delete proA;
	proA = NULL;
	delete proB;
	proB = NULL;

	return 0;
}
