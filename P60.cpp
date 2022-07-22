#include<iostream>
using namespace std;
class RBI
{
	public:
		virtual void ROI()=0;
	
};
class SBI:public RBI
{
	public:
		void ROI()
		{
			cout<<"\n 8.5";
		}
};
class BOI:public RBI
{
	public:
		void ROI()
		{
			cout<<"\n 4.8";
		}
};
main()
{
	SBI sbi;
	BOI boi;
	
	sbi.ROI();
	boi.ROI();
}

