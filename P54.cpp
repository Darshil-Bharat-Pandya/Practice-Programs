#include<iostream>
using namespace std;
class A
{
	public:
		void dispalyA()
		{
			cout <<"\n hello i am A class";
		}
};
class B:public A 
{
	public:
		void dispalyB()
		{
			cout <<"\n hello  i am  B class";
		}
};
main()
{
	B obj;
	obj.dispalyA();
	obj.dispalyB();
}

