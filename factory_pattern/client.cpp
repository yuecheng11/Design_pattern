#include "SimpleFactory.hpp"

int main()
{
	AbsFactory* absFact = new SimpleFactory();
	AbsProduct* product = absFact->createProduct(1);
	product->operation();

	delete product;
	product = NULL;

	product = absFact->createProduct(2);
	product->operation();
	delete product;
	product = NULL;

	delete absFact;

	return 0;
}
