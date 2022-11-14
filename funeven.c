#include <stdio.h>
void even(int x)
{
	printf("%d your number is =",x);
}
void main()
{
	int x;
	printf("Enter your number\n",x);
	scanf("%d",&x);
	
	if(x%2==0)
	{
		printf("The number is even\n");
	}
	else
	{
		printf("The number is odd\n");
	}
	even(x);
}
