#include<stdio.h>
main()
{
	char gender[20];
	printf("enter your gender: ");
	gets(gender);
	
	if (strcmp(gender,"male")==0)
	{
		printf("male");
	}
	else
	{
		printf("female");
	}
}

