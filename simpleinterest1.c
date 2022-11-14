#include<stdio.h>
#include<math.h>

int main(){
	
	float principle,time,rate;
	float si;
	
	printf("Enter your principle:\n");
	scanf("%f",&principle);
	
	printf("Enter your time:\n");
	scanf("%f",&time);
	
	printf("Enter your rate:\n");
	scanf("%f",&rate);
	
	si = (principle*time*rate)/100;
	
	printf("Simple Interest = %.2f",si);
	return 0;
}
