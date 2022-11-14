#include <stdio.h>
void main()
{
	int a=10,b=20,res=0;

	printf("The number of swap %d is %d\n",a,b);
	res=a+b;
	b=res-b;
	a=res-a;
	printf("swap number is a=%d, b= %d, res=%d",a,b)
}
