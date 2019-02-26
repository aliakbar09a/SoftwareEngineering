#include<iostream>
using namespace std;
class Singleton
{
	Singleton()
	{
		counter++;
	}
	
	static Singleton* single_ptr;
	static int counter;
public:
	
	static Singleton* getInstance()
	{
		if(single_ptr == NULL)
			single_ptr = new Singleton();
		return single_ptr;
	}
	void printCount()
	{
		cout<<"\nCounter = "<<counter<<endl;
	}
};
int Singleton::counter=0;
Singleton* Singleton::single_ptr = NULL;
int main()
{
	Singleton* ptr1 = Singleton::getInstance();
	ptr1->printCount();
	cout<<ptr1<<endl;
	Singleton* ptr2 = Singleton::getInstance();
	ptr2->printCount();
	cout<<ptr2<<endl;
}
