#include<iostream>
using namespace std;
class A
{
	public:
	int num1;
	void inputA()
	{
		cout<<"enter num1 : ";
		cin>>num1;
	}
};
class B
{
	public:
		int num2;
		void inputB()
		{
			cout<<"enter num2 : ";
			cin>>num2;
		}
};
class C : public A,public B
{
	public:
		int ans;
		void display()
		{
			ans = num1+num2;
			cout<<"\n ans = "<<ans;
		}
};
main()
{
	C obj;
	obj.inputA();
	obj.inputB();
	obj.display();
}

