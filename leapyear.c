#include<stdio.h>
void main()
{
	int year;
	printf("Enter a year\n");
	scanf("%d", &year);
	
	if(year%4==0)
	{
	printf("Leap year");
	}
	
	else
	{
		printf("year");
	}
}
