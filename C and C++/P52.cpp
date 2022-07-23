#include<iostream>
using namespace std;
class Student
{
	int id;
	char name[20];
	public:
	void setId()
	{
		cout<<"\n Enter id : ";
		cin>>id;
	}
	int getId()
	{
		return id;
	}
	void setName()
	{
		fflush(stdin);
		cout<<"\n Enter name : ";
		gets(name);
	}
	string getName()
	{
		return name;
	}
};
main()
{
	Student s;
	s.setId();
	cout<<"\n name : "<<s.getName();
}

