#include<iostream>
using namespace std;
template <class T>
T addition (T num1,T num2)
{
	T ans;
	ans=num1+num2;
	return ans;
}
main()
{
	int i_num1=5,i_num2=6;
	cout<<"\n addition ans: "<<addition(i_num1,i_num2);
	
	float f_num1=4.5,f_num2=7.2;
	cout<<"\n addition ans: "<<addition(f_num1,f_num2);
}

