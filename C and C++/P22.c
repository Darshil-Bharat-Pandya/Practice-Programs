#include<stdio.h>
main()
{
	int marks[5] = {12,23,34,56,67};
	int i;
	for (int i=1;i<5;i++)
	{
		printf("\nsubject %d marks %d ",i+1,marks[i]);
	}
}

