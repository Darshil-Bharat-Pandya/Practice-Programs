#include<stdio.h>
main()
{
	int num; // normal variable
	num=10; // assign value in num
	int *p; // here p is a pointer variable
	// now, store value in pointer variable
	p=&num; // store address of num in pointer variable (p)
	printf("\n value = %d",num);
	printf("\n value = %d",p);
	printf("\n value = %d",*p);
}

