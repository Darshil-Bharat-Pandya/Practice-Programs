#include<stdio.h>
main()
{
	int marks[5]; //array
	int i,sum=0;
	float avg;
	
	for (i=0;i<5;i++)
	{
		printf("enter marks : ");
		scanf("%d",&marks[i]);
		
	}
	for(i=0;i<5;i++)
	{
		printf("\n marks = %d ",marks[i]);
		sum+=marks[i];
	}
	printf("\n sum = %d",sum);
	avg=sum/5;
	printf("\n average = %0.2f",avg);
}


