#include "AbstractProduct.hpp"

AbsProduct::AbsProduct()
{

}

AbsProduct::~AbsProduct()
{

}

ProductA::ProductA()
{

}

ProductA::~ProductA()
{
}

void ProductA::operation()
{
	cout<<"productA operation"<<endl;
}

ProductB::ProductB()
{

}

ProductB::~ProductB()
{
}

void ProductB::operation()
{
	cout<<"productB operation"<<endl;
}