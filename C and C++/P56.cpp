#include<iostream>
using namespace std;
class A
{
	public:
		int c;
		void dispalyB()
		{
			dispalyA();
			c=a+b;
			cout<<"\n ans = "<<c;
		}
};
class C:public B 
{
	public:
		void dispalyC()
		{
			cout<<"\n "<<c*c;
		}
};
main()
{
	C obj;
	obj.dispalyB();
	obj.dispalyC();
}

