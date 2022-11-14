//Method 4
#include<stdio.h>
void add(); //function declaration
int main()
{
	add(); //function calling
	
	
	return 0;
}
void add()  //defining function body
{
	int a,b;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	int c=a+b;
	printf("The sum is a+b is %d",c);
}
