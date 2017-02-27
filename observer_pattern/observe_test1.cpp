#include <iostream>
#include <list>
using namespace std;

class Observer
{
public:
	virtual void update(int) = 0;
};

class Subject
{
public:
	virtual void Attach(Observer* ) = 0;
	virtual void Detach(Observer* ) = 0;
	virtual void Notify() = 0;
	virtual void setstatus(int status) = 0;
};

class ConcreteSubject:public Subject
{
public:
	void Attach(Observer *obs)
	{
		m_ObserverList.push_back(obs);
	}

	void Detach(Observer *obs)
	{
		m_ObserverList.remove(obs);
	}
	void Notify()
	{
		for(list<Observer*>::iterator it = m_ObserverList.begin();
			it != m_ObserverList.end();++it)
		{
			(*it)->update(m_status);
		}
	}
	void setstatus(int status)
	{
		m_status = status;
	}
private:
	list<Observer*> m_ObserverList;
	int m_status;
};

class Observer1:public Observer
{
	void update(int value)
    {
        cout << "ConcreteObserver1 get the update. New State:" << value << endl;
    }
};

class Observer2:public Observer
{
	void update(int value)
    {
        cout << "ConcreteObserver2 get the update. New State:" << value << endl;
    }
};

int main()
{
	Subject* psubject = new ConcreteSubject();

	Observer *pob1 = new Observer1();
	Observer *pob2 = new Observer2();
	
	psubject->Attach(pob1);
	psubject->Attach(pob2);

	psubject->setstatus(2);

	psubject->Notify();

	cout<<endl;
	psubject->Detach(pob2);
	psubject->setstatus(1);
	psubject->Notify();
	cout<<endl;
	
	psubject->Attach(pob1);
	psubject->Attach(pob2);
	psubject->setstatus(3);
	psubject->Notify();
	return 0;
}