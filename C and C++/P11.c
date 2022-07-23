#include<stdio.h>
main()
{
	int i;
	int marks;
	for(i=1;i<=5;i++)
	{
		printf("Enter marks: ");
		scanf("%d",&marks);
		if (marks<35)
		{
			break;
		}
	}
}

