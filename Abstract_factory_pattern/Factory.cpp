#include "Factory.h"

factory::factory()
{

}

factory::~factory()
{

}

factory1::factory1()
{
	
}

factory1::~factory1()
{
	
}

AbsproductA* factory1::createProductA()
{
	cout<<"factory1 create productA1"<<endl;
	return new ProductA1();
}

AbsproductB* factory1::createProductB()
{
	cout<<"factory1 create productB1"<<endl;
	return new ProductB1();
}

factory2::factory2()
{
}
factory2::~factory2()
{

}

AbsproductA* factory2::createProductA()
{
	cout<<"factory2 create productA2"<<endl;
	return new ProductA2();
}

AbsproductB* factory2::createProductB()
{
	cout<<"factory2 create productB2"<<endl;
	return new ProductB2();
}