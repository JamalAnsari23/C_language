#include<stdio.h>
#include<math.h>

//calculate compound interest annually

int main(){
	
	float principle,rate,time;
	float CI;
	
	printf("Enter principle:\n");
	scanf("%f",&principle);
	
	printf("Enter rate:\n");
	scanf("%f",&rate);
	
	printf("Enter time:\n");
	scanf("%f",&time);
	
	CI = principle * (pow((1+rate/100),time));
	
	printf("Compound Interest = %.2f",CI);
	return 0;
	
	
}
