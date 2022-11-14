#include<stdio.h>
void main()
{
	int num1,num2,sum;
	int *ptr1, *ptr2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	printf("Enter any two numbers:");
	scanf("%d%d", ptr1, ptr2);
	sum=*ptr1 + *ptr2;
	printf("sum = %d",sum);
}
