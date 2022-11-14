#include<stdio.h>

int main()
{
	float fahrenhiet,celcius;
	
	printf("Enter your fahrenhiet\n");
	scanf("%f",&fahrenhiet);
	
	celcius = (fahrenhiet-32)*5/9;
	
	printf("Your fahrenhiet result is %.2f celcius\n",celcius);
	return 0;
}
