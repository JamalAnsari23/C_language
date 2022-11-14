#include<stdio.h>

int main(){
	int num1,num2;
	int sum,sub,multi,mod;
	float div;
	
	printf("Enter any two number\n");
	scanf("%d%d",&num1,&num2);
	
	sum = num1 + num2;
	sub = num1-num2;
	multi = num1*num2;
	mod = num1%num2;
	div = (float)num1/num2;
	
	printf("Sum is %d\n",sum); 
	printf("Subtract is %d\n",sub); 
	printf("Multiply is %d\n",multi); 
	printf("mod is %d\n",mod); 
	printf("divide is %f\n",div); 
	
}
