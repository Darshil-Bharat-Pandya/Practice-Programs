#include<stdio.h>
struct bank
{
	char cust_name[20];
	int account_no;
	int balance;
}obj[5];

main()
{
	struct bank c1[5];
	int i=0,choice;
	while (i<5)
	{
		fflush(stdin);
		printf("enter customer name: ");
		gets(c1[i].cust_name);
		printf("enter account no: ");
		scanf("%d",&c1[i].account_no);
		printf("enter opening balance: ");
		scanf("%d",&c1[i].balance);
		
		printf("do you want to add more customer press 1 for yes and 0 for no: ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			i++;
		}
		else 
		{
			printf("\n THANK YOU !!!");
			i=5;
		}
	}
}

