#include<iostream>
using namespace std;
class outerclass	
{
	public:
		int a=10;
	class innerclass
	{
		public:
		int b=20;
	};
};
main()
{
	outerclass obj;
	outerclass::innerclass in;
	
	cout<<"\n a = "<<obj.a;
	cout<<"\n b = "<<in.b;
}

