#include<stdio.h>
main()
{
	int nums[5];
	int evens[5],odds[5];
	int i;
	int ecount=0,o=0;
	for(i=0;i<5;i++)
	{
		printf("enter num : ");
		scanf("%d",&nums[i]);
		if (nums[i]%2==0)
		{
			evens[ecount] = nums[i];
			ecount++;
		}
		else 
		{
			odds[o]=nums[i];
			o++;
		}
	}
	printf("\n evens \n");
	for(i=0;i<ecount;i++);
	{
		printf("\n %d",evens[i]);
	}
	printf("\n odds \n");
	for(i=0;i<o;i++)
	{
		printf("\n %d", odds[i]);
	}
}

