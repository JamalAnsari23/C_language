#include<stdio.h>
void main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	 switch(num % 2)
    {
        case 0: 
            printf("Even");
            break;
            
        case 1: 
            printf("Odd");
            break;
    }
}
