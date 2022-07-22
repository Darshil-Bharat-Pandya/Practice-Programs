#include<iostream>
using namespace std;
class Sample
{
	int a,b;
	
	public:
		void set(int a, int b)
		{
			this->a=a;
			this->b=b; 
		}
		
		void get()
		{
			cout<<"\n a = "<<a;
			cout<<"\n b = "<<b;
		}
};
main()
{
	Sample obj;
	obj.set(12,25);
	obj.get();
}

