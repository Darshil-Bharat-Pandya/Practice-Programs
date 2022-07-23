#include<iostream>
using namespace std;
class RBI 
{
	public:
		void ROI()
		{
			cout<<"\n ROI is 7.5";
		}
};
class SBI: public RBI
{
	public:
		void ROI()
		{
			RBI::ROI();
			cout<<"\n ROI is 6.8";
		}
};
main()
{
	SBI obj;
	obj.ROI();
}

