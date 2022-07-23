#include<stdio.h>
struct student
{
	int id;
	int marks[5]; // array within structure
}s1;
main()
{
	// struct student s1;
	int i;
	printf("enter id : ");
	scanf ("%d",&s1.id);
	
	for (i=0;i<5;i++)
	{
		printf("enter marks : ");
		scanf("%d",&s1.marks[i]);
	}
	
	printf("\n student details : ");
	printf("\n id = %d",s1.id);
	
	for (i=0;i<5;i++)
	{
		printf("\n marks = %d ", s1.marks[i]);
	}
	
}

