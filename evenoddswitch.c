#include<stdio.h>
void main()
{
	int x;
	printf("Enter The numbers\n");
	scanf("%d",&x);
	switch(x%2)
		{
			case 0:
			printf("your number is even\n");
			break;
			case 1:
			printf("your number is odd"); 
		}
}
