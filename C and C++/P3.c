#include<stdio.h>
main()
{
	int num;
	char c;
	printf("enter a number: ");
	scanf("%d",&num);
	printf("\n number=%d",num);
	fflush(stdin);
	printf("\n enter a characters: ");
	scanf("%c",&c);
	printf("\n character = %c",c);
}

