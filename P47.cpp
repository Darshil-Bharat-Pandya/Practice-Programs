#include<iostream>
using namespace std;
// Array within class
class Student
{
	int id;
	char name[20];
	int marks[5];
	public:
		void inputData()
		{
			cout<<"enter id: ";
			cin>>id;
			fflush(stdin);
			cout<<"enter name : ";
			gets(name);
			
			for(int i=0;i<5;i++)
			{
				cout<<"\n enter marks ";
				cin>>marks[i];	
			}	
		}
		void displayData()
		{
			cout<<"\n id = "<<id;
			cout<<"\n name = "<<name;
			for(int i=0;i<5;i++)
			{
				cout <<"\n marks = "<<marks[i];
			}	
		}	
};
main()
{
	Student obj;
	obj.inputData();
	obj.displayData();
}

