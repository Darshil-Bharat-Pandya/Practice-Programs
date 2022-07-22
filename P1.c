#include<stdio.h>
main()
{
	char name[20]; // char varname[size];
	printf("enter your name : ");
	scanf("%[^\n]",&name);
	printf("your name=%s",name);
}

