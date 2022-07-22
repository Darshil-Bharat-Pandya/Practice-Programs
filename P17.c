#include<stdio.h>
main()
{
	char choice;
	
	printf("enter a character : ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf ("vowel");
		break;
		default:
		printf ("not vowel");
	}
}

