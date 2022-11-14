//Method 3
#include <stdio.h>
int add(); //function declaration
int main()
{
	add(); //function calling
	return 0;
}
int add() //defining function body
{
	int a,b;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	int c=a+b;
	printf("The sum is a+b is %d",c);
}

