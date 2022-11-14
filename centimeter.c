#include<stdio.h>

int main(){
	
	int centimeter;
	float meter,kilometer;
	
	printf("Enter your centimeter:-\n");
	scanf("%d",&centimeter);
	
	meter = centimeter/100;
	kilometer = centimeter/10000;
	
	printf("After convert centimeter into meter :- %.2f meter\n",meter);
	printf("After convert centimeter into kilometer :- %.2f kilometer",kilometer);
	return 0;
}
