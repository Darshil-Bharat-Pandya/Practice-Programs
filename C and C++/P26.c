#include<stdio.h>
main()
{
	int arr[2][3];
	int i,j;
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("enter element [%d][%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for (i=0;j<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("\n %d",arr[i][j]);		
		}
	}
}

