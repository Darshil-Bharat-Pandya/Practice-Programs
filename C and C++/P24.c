#include<stdio.h>
main()
{
	int marks[5]; //array
	
	int i;
	int m;
	for(i=0;i<=5;i++)
	{
		printf("enter marks : ");
		scanf("%d",&marks[i]);
		if (marks[i]<0)
		{
			printf("\n invalid input \n");
			printf("re enter mark : ");
			scanf("%d",&marks[i]);
			
		}
		for (i=0;i<5;i++)
		{
			printf("\n marks = %d, marks[i]");
		}
	}
}

