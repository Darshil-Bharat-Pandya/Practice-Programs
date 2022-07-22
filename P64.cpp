#include<iostream>
using namespace std;
template<class T>
class student
{
	public:
		T a;
		
		T display()
		{
			return a;
		}
};
main()
{
	student<int> obj;
	obj.a=10;
	cout<<"\n "<<obj.display();
	
	student<float> objf;
	objf.a=45.98;
	cout<<"\n "<<objf.display();
}

