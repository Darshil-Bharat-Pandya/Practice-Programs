#include<stdio.h>
#include<string.h>
main()
{
	char name[30];
	int i,count=0;
	printf("enter a name : ");
	gets(name);
	
	printf("\n name::%s",name);
	for (i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf("\n length = %d", count);
}

