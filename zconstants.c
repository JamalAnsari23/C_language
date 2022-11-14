#include<stdio.h>
#define PI 3.14
void main()
{
	int a=8;
	const float b=7.333;
	PI = 7.33; //cannot do this since PI is constant
	printf("%f\n",PI);
	//b=7.22;//cannot do this since b is constant
	printf("%f",b);
}
