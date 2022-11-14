#include<stdio.h>
int fact(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}
void main()
{
	int num;
	printf("Enter your number\n",num);
	scanf("%d",&num);
	printf("The factorial of %d is %d\n",num,fact(num));
}

