#include "SimpleFactory.hpp"

AbsFactory::AbsFactory()
{

}

AbsFactory::~AbsFactory()
{

}
SimpleFactory::SimpleFactory()
{
}

SimpleFactory::~SimpleFactory()
{
}

AbsProduct* SimpleFactory::createProduct(int type)
{
	//AbsProduct* temp = NULL;

	switch(type)
	{
	case 1:
		return new ProductA();
		break;
	case 2:
		return new ProductB();
		break;
	default:
		cout<<"type error"<<endl;
		break;
	}

	return NULL;
}
