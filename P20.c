#include<stdio.h>
#include<stdbool.h>
bool ispositive(int num)
{
	if (num>0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
main()
{
	int num;
	bool value;
	printf("enter a number: ");
	scanf("%d",&num);
	
	value = ispositive(num);
	printf("%d",value);
	
}

