//Method 2
#include<stdio.h>
int sub(int x, int y);  //function declaration

int main()
{
	int a,b;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	
	int z=sub(a,b);  //function calling
	printf("The sub of a-b is %d",z);
	return 0;
}
int sub(int x, int y)   //function body
{
	int c=x-y;
	return c;
}
