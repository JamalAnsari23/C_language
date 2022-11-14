#include<stdio.h>
#include<math.h>

int main(){
	
	float base,height,Area;
	
	printf("Enter your base : \n");
	scanf("%f",&base);
	
	printf("Enter your height : \n");
	scanf("%f",&height);
	
	Area =(base * height)/2;
	
	printf("The Area of triangle is : %.2f",Area);
	
	return 0;
}
