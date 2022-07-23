#include<stdio.h>
struct student
{
	int id;
	char name[20];
}s1;
main()
{
	FILE *fp;
	fp=fopen ("myfile.txt","a");
	printf("enter student id : ");
	scanf("%d",&s1.id);
	fprintf(fp,"\n id = %d",s1.id);
	fflush(stdin);
	printf("enter student name : ");
	gets(s1.name);
	fprintf(fp,"\n name = %s",s1.name);
	fclose(fp);
}

