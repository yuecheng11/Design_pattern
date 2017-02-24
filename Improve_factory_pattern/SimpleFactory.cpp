#include "SimpleFactory.hpp"

AbsFactory::AbsFactory()
{

}

AbsFactory::~AbsFactory()
{

}
FactoryA::FactoryA()
{
}

FactoryA::~FactoryA()
{
}

AbsProduct* FactoryA::createProduct()
{
	//AbsProduct* temp = NULL;

	cout<<"create product A"<<endl;
	return new ProductA();
}
FactoryB::FactoryB()
{
}

FactoryB::~FactoryB()
{
}

AbsProduct* FactoryB::createProduct()
{
	//AbsProduct* temp = NULL;

	cout<<"create product B"<<endl;
	return new ProductB();
}


