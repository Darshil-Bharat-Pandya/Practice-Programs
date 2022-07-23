#include<stdio.h>
struct automobiles
{
	int wheels;
	int speed;
	char color[20];
};
main()
{
	struct automobiles car;
	
	printf("\n enter wheels : ");
	scanf("%d", &car.wheels);
	
	printf("\n enter speed :");
	scanf("%d", &car.speed);
	
	fflush(stdin);
	
	printf("\n enter car color : ");
	gets(car.color);
	
	printf("\n car information : ");
	printf("\n car wheels : %d",car.wheels);
	printf("\n car speed : %d",car.speed);
	printf("\n car color : %s",car.color);
	
}

