#include<stdio.h>
main()
{
	int i;
	int age;
	for (i=1;i<=5;i++)
	{
		printf("\n enter your age: ");
		scanf("%d",&age);
		if(age<18)
		{
			continue;
		}
		printf("\n person allow");
	}
}

