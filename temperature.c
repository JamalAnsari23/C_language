#include<stdio.h>

int main(){
	
	float celcius,fahrenheit;
	
	printf("Enter the celcius \n");
	scanf("%f",&celcius);
	
	fahrenheit = (celcius *9/5)+32;
	printf("The result is %.2f  fahrenheit",fahrenheit);
	
	return 0;
}
