#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		void dispalyA()
		{
			cout <<"\n enter a : ";
			cout >>a;
			cout <<"\n enter b : ";
			cin  >>b;
		}
};
class B:public A 
{
	public:
		int c;
		void dispalyB()
		{
			displayA();
			c=a+b;
			cout<<"\n ans = "<<c;
		}
};
main()
{
	B obj;
	obj.dispalyB();
}

