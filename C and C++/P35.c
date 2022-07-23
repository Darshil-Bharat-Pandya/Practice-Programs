#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("myfile.txt","w");
	fprintf(fp,"\nhello welcome to c");
	fprintf(fp,"\nMy file program");
	fclose(fp);

}
