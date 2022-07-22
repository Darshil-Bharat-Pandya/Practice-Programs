#include<stdio.h>
main()
{
	int i;
	for (i=1;i<=8;i++)
	{
		if(i==3 || i==4 || i==7)
		{
			continue;
		}
		printf("\n %d",i);
	}
}

