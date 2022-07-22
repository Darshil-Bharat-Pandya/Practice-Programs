#include<stdio.h>
union student
{
	int id;
	char name[20];
	int marks;
};
main()
{
	union student s1;
	printf("\n student structure memory = %d",sizeof(s1));
}

