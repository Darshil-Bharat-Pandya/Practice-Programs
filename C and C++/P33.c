#include<stdio.h>
struct student
{
	int id;
	char name[20];
	struct dob
	{
		int dd;
		int mm;
		int yyyy;
	}date;
}s1;
main()
{
	printf("enter student id : ");
	scanf("%d",&s1.id);
	fflush(stdin);
	
	printf("enter student name : ");
	gets(s1.name);
	
	printf("enter student date of birth : dd-mm-yyyy : ");
	scanf("%d %d %d",&s1.date.dd,&s1.date.mm,&s1.date.yyyy);
	
	printf("\n ----- display student information \n ");
	printf("\n student id : %d",s1.id);
	printf("\n student name : %s",s1.name);
	printf("\n student date of birth = %d-%d-%d",s1.date.dd,s1.date.mm,s1.date.yyyy);
}

