#include<stdio.h>
main()
{
	int num;
	
	printf("enter a number : ");
	scanf("%d",&num);
	
	if (num%2==0)
	{
		goto even;
	}
	else
	{
		goto odd;
	}
	
	even: // Label
		printf("even number");
		return 0;
	odd:
		printf("odd number");
}

