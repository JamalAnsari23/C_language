#include<stdio.h>
void main()
{
	int marks;
	
	printf("Enter your marks\n",marks);
	scanf("%d",&marks);
	
	printf("You have entered %d as your marks\n",marks);
    if(marks<=50)
	{
		printf("you are fail in examination\n");
		printf("and your gift is 100 danda");
	}
	
	else if(marks<=150)
	{
		printf("you passed in mathematics exam\n");
		printf("and your gift is 100$");
	}
	else if(marks<=250)
	{
		printf("you passed in science exam\n");
		printf("and your gift is 300$");
	}
	else if(marks<=450)
	{
		printf("you passed in both exam science and mathematics\n");
		printf("and your gift is 500$");
	}
	
}
