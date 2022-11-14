#include<stdio.h>
void cubecube(int j)
{
	printf("%d your number is\n =\n", (j*j*j));
}
void main()
{
	int j;
	printf("Enter your number\n",j);
	scanf("%d",&j);
	cubecube(j);
}
