#include<stdio.h>
#include<stdbool.h>
main()
{
	bool status=true; // status initial value is true
	int num1,num2,sum,choice;
	
	while (status)
	{
		printf("enter a number: ");
		scanf("%d",&num1);
		
		printf("enter a number: ");
		scanf("%d",&num2);
		
		sum=num1+num2;
		printf("\n sum=%d",sum);
		printf("\n do you want to repeat - press 1 for yes and press 2 for no : ");
		scanf("%d", &choice);
		
		if (choice==2)
		{
			status = false;
		}
	}
}

