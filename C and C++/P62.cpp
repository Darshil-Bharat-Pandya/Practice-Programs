#include<iostream>
using namespace std;

float division(int num1,int num2)
{
	if(num2==0)
	{
		throw"cannot be divided by zero";
	}
	return num1/num2;
}
main()
{
	int num1=10;
	int num2=3;
	int ans;
	try
	{
		ans=division(num1,num2);
		cout<<"\n ans = "<<ans;
	}
	catch(const char* e)
	{
		cout<<"error message : "<<e;
	}
}

