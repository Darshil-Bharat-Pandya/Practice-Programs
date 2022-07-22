#include<iostream>
using namespace std;
class address
{
	public:
		string city;
		string state;
		address(string city,string state)
		{
			this->city=city;
			this->state=state;
		}
};
class employee
{
	public:
	int id;
	string name;
	address* address;
	
	employee(int id,string name, address* address)
	{
		this->id=id;
		this->name=name;
		this->address=address;
	}
	void display()
	{
		cout<<"\n id = "<<id;
		cout<<"\n name = "<<name;
		cout<<"\n city = "<<address->city;
		cout<<"\n state = "<<address->state;
	}
};
main()
{
	address a1=address("ahmedabad","gujarat");
	employee e1=employee(1,"aaa",a1);
	e1.display();
}

