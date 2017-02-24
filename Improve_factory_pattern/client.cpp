#include "SimpleFactory.hpp"

int main()
{
	AbsFactory* absFact = new FactoryA();
	AbsProduct* product = absFact->createProduct();
	product->operation();

	delete product;
	product = NULL;
	delete absFact;
	absFact = NULL;

	absFact = new FactoryB();
	product = absFact->createProduct();
	product->operation();
	delete product;
	product = NULL;

	delete absFact;
	absFact = NULL;

	return 0;
}
