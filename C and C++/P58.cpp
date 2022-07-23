#include<iostream>
using namespace std;
class A
{
	public:
	void display()
	{
		cout<<"\n display class caalled";
	}
	void display(int num)
	{
		cout<<"\n A ="<<num;
	}	
};
main()
{
	A obj;
	obj.display(45);
	obj.display();
}

