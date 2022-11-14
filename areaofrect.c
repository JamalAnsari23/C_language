#include<stdio.h>

int main(){
	float length,breadth,Area;
	
	printf("Enter your length \n");
	scanf("%f",&length);
	
	printf("Enter your breadth \n");
	scanf("%f",&breadth);
	
	Area = length * breadth;
	
	printf("The Area of rectangle = %f sq.units",Area);
	return 0;
}
