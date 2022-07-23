#include<iostream>
using namespace std;
class Student
{
	public:
	int id;
	char name[20];
	void set() // setter
	{
		cout <<"enter id : ";
		cin>>id;
		fflush(stdin);
		cout<<"enter name : ";
		gets(name);
	}
	void get() // getter
	{
		cout <<" \n id : "<<id;
		cout <<" \n name : "<<name;
	}
};
main()
{
	Student obj;
	obj.set();
	obj.get();
}

