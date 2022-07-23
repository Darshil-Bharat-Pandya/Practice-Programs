#include<stdio.h>
struct student
{
	int id;
	char name[20];
};
main()
{
	struct student s1;
	
	printf("enter student id : ");
	scanf("%d",&s1.id);
	
	fflush(stdin);
	
	printf("enter student name : ");
	gets(s1.name);
	
	printf("\n student details ------------\n ");
	
	printf("\n id = %d", s1.id);
	printf("\n name = %s",s1.name);
}

