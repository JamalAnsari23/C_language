#include<stdio.h>
void main()
{
	int age;
	
	printf("Enter your age\n",age);
	scanf("%d",&age);
	
	printf("You have entered %d as your age\n",age);
	
	if(age>=18)
	{
		printf("you can vote");
	}
	else if(age>=10)
	{
		printf("you can vote for kids");
	}
	else 
	{
		printf("you cannot vote");
	}
}
