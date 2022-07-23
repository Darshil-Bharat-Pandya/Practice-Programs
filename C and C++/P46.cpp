#include<iostream>
using namespace std;
class Sample
{
	int num1=10;
	public: // access specifier
	int num2=20;
};
main()
{
	Sample obj;
	cout<<"\n num2 = "<<obj.num2;
}

