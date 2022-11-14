#include<stdio.h>
#include<math.h>

int main(){
	
	float side, Area;
	
	printf("Enter your side of equilateral triangle : \n");
	scanf("%f",&side);
	
	Area = sqrt(3)/4*(side*side);
	
	printf("The Area of Equilateral triangle is : %.2f",Area);
	return 0;
}
